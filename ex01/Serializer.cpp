/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:53:09 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/17 11:25:33 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Data* Serializer::deserialize(uintptr_t raw)
{
	Data	*temp;
	
	temp = reinterpret_cast<Data*>(raw);
	return (temp);
}

uintptr_t Serializer::serialize(Data* ptr)
{
	uintptr_t	temp;
	
	temp = reinterpret_cast<uintptr_t>(ptr);
	return (temp);
}

Serializer::Serializer(Serializer &cpy)
{
	(void)cpy;
}

Serializer::Serializer()
{}

Serializer::~Serializer()
{
}

Serializer	&Serializer::operator=(Serializer const &cpy)
{
	(void)cpy;
	return (*this);
}
