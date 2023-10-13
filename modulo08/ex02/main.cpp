/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/13 07:21:13 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/13 07:53:50 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	std::cout << "	-----TEST-----" << std::endl;
	{
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		MutantStack<int> mstack2 = mstack;
		std::cout << mstack2.top() << std::endl;
		MutantStack<int> mstack3(mstack);
		std::cout << mstack3.top() << std::endl;
	}
	std::cout << "	-----TEST SUBJECT-----" << std::endl;
	{
		std::cout << "OUTPUT MUTANTSTACK" << std::endl;
		{
			MutantStack<int> mstack;
			mstack.push(5);
			mstack.push(17);
			std::cout << mstack.top() << std::endl;
			mstack.pop();
			std::cout << mstack.size() << std::endl;
			mstack.push(3);
			mstack.push(5);
			mstack.push(737);
			mstack.push(0);
			MutantStack<int>::iterator it = mstack.begin();
			MutantStack<int>::iterator ite = mstack.end();
			++it;
			--it;
			while (it != ite)
			{
				std::cout << *it << std::endl;
				++it;
			}
			std::stack<int> s(mstack);
		}
		std::cout << "OUTPUT VECTOR" << std::endl;
		{
			std::vector<int> mstack;
			mstack.push_back(5);
			mstack.push_back(17);
			std::cout << mstack[mstack.size() - 1] << std::endl;
			mstack.pop_back();
			std::cout << mstack.size() << std::endl;
			mstack.push_back(3);
			mstack.push_back(5);
			mstack.push_back(737);
			mstack.push_back(0);
			std::vector<int>::iterator it = mstack.begin();
			std::vector<int>::iterator ite = mstack.end();
			++it;
			--it;
			while (it != ite)
			{
				std::cout << *it << std::endl;
				++it;
			}
		}
	}
	return 0;
}
