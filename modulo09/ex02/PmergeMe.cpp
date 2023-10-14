/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/14 09:21:45 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/14 11:30:08 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{
}

PmergeMe::~PmergeMe()
{
}

PmergeMe::PmergeMe(PmergeMe &src)
{
	*this=src;
}

PmergeMe &PmergeMe::operator=(PmergeMe &src)
{
	if (this != &src)
	{
		this->myList = src.myList;
	}
	return (*this);
}

PmergeMe::PmergeMe(std::string str)
{
	std::istringstream stream(str);
	std::string token;
	while (stream >> token)
	{
		std::istringstream tokenStream(token);
		int n;
        if (tokenStream >> n)
		{
			if (n >= 0)
			{
				this->myVect.push_back(n);
				this->myList.push_back(n);
			}
			else
				throw(BadArgument());
		}
		else
			throw(BadArgument());
	}
}

void PmergeMe::PrintList()
{
	for (std::list<int>::const_iterator it1 = this->myList.begin(); it1 != this->myList.end(); ++it1) {
        std::list<int>::const_iterator it2 = it1;
        ++it2;
        for (; it2 != this->myList.end(); ++it2) {
            if (*it1 == *it2) {
                throw(BadArgument());
            }
        }
    }
	std::list<int>::iterator it;
    for (it = this->myList.begin(); it != this->myList.end(); ++it) {
        std::cout << *it << " ";
    }
}

static void mergeList(std::list<int>& left, std::list<int>& right, std::list<int>& result) {
    std::list<int>::iterator leftIt = left.begin();
    std::list<int>::iterator rightIt = right.begin();

    while (leftIt != left.end() && rightIt != right.end()) {
        if (*leftIt <= *rightIt) {
            result.push_back(*leftIt);
            ++leftIt;
        } else {
            result.push_back(*rightIt);
            ++rightIt;
        }
    }

    while (leftIt != left.end()) {
        result.push_back(*leftIt);
        ++leftIt;
    }

    while (rightIt != right.end()) {
        result.push_back(*rightIt);
        ++rightIt;
    }
}

static void mergeSortList(std::list<int>& inputList)
{
    if (inputList.size() <= 1) {
        return;
    }
    std::list<int> left, right;
    std::list<int>::iterator it = inputList.begin();
    int size = inputList.size();
    for (int i = 0; i < size / 2; ++i) {
        left.push_back(*it);
        ++it;
    }
    for (; it != inputList.end(); ++it) {
        right.push_back(*it);
    }
    mergeSortList(left);
    mergeSortList(right);
    inputList.clear();
    mergeList(left, right, inputList);
}

clock_t PmergeMe::SortList()
{
	clock_t startTime = clock();
	if (this->myList.size() <= 1)
        return (clock() - startTime);
	mergeSortList(this->myList);
	clock_t endTime = clock();
	return (endTime - startTime);
}

static void mergeVect(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    std::vector<int> leftArr(n1);
    std::vector<int> rightArr(n2);

    for (int i = 0; i < n1; ++i) {
        leftArr[i] = arr[left + i];
    }

    for (int j = 0; j < n2; ++j) {
        rightArr[j] = arr[mid + 1 + j];
    }
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (leftArr[i] <= rightArr[j]) {
            arr[k] = leftArr[i];
            ++i;
        } else {
            arr[k] = rightArr[j];
            ++j;
        }
        ++k;
    }
    while (i < n1) {
        arr[k] = leftArr[i];
        ++i;
        ++k;
    }
    while (j < n2) {
        arr[k] = rightArr[j];
        ++j;
        ++k;
    }
}

void mergeSortVect(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSortVect(arr, left, mid);
        mergeSortVect(arr, mid + 1, right);
        mergeVect(arr, left, mid, right);
    }
}

clock_t PmergeMe::SortVect()
{
	clock_t startTime = clock();
	int size = this->myVect.size();
	mergeSortVect(this->myVect, 0, size - 1);
	clock_t endTime = clock();
	return (endTime - startTime);
}