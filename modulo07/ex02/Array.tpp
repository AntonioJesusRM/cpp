/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aruiz-mo <aruiz-mo@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 13:55:57 by aruiz-mo          #+#    #+#             */
/*   Updated: 2023/10/10 14:44:41 by aruiz-mo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

template <typename T>
Array<T>::Array():len(0), data(0)
{
}

template <typename T>
Array<T>::Array(unsigned int n):len(n)
{
	data = new T[len];
}

template <typename T>
Array<T>::~Array()
{
	delete [] data;
}

template <typename T>
Array<T>::Array(const Array &src):len(src.len)
{
	data = new T[len];
	for(unsigned int i = 0; i < len; i++)
		data[i] = src.data[i];
}

template <typename T>
Array<T>	&Array<T>::operator=(const Array &src)
{
	this->len = src.len;
	data = new T[len];
	for(unsigned int i = 0; i < len; i++)
		data[i] = src.data[i];
	return(*data);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (len);
}

template <typename T>
T	&Array<T>::operator[](const int i) const
{
	if (i < 0 || static_cast<unsigned int>(i) >= len)
		throw outOfRange();
	return(data[i]);
}