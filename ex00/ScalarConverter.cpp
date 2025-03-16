/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 06:25:13 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/16 09:50:03 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() : imput("42")
{
}

ScalarConverter::ScalarConverter(std::string in) : imput(in)
{}

ScalarConverter::ScalarConverter(ScalarConverter &cpy) : imput(cpy.imput)
{

}

ScalarConverter::~ScalarConverter()
{}

ScalarConverter&	ScalarConverter::operator=(ScalarConverter const &cpy)
{
	this->imput = cpy.imput;
	return *this;
}

// Write a class ScalarConverter that will contain only one static method "convert"
// that will take as a parameter a string representation of a C++ literal in its most common
// form and output its value in the following series of scalar types:
// • char
// • int
// • float
// • double
// As this class doesn’t need to store anything at all, it must not be instantiable by users.
// Except for char parameters, only the decimal notation will be used.
// Examples of char literals: ’c’, ’a’, ...
// To make things simple, please note that non-displayable characters shouldn’t be used as
// inputs. If a conversion to char is not displayable, print an informative message.
// Examples of int literals: 0, -42, 42...
// Examples of float literals: 0.0f, -4.2f, 4.2f...
// You have to handle these pseudo-literals as well (you know, for science): -inff, +inff,
// and nanf.

// need to refactor with this->imput;
// static_cast<type>(variable)
void ScalarConverter::convert(std::string base)
{
	long long	temp;
	double		tempf;

	if (base.empty() == true)
	{
		std::cout << "Char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
	else
	{
		try //convert in int
		{
			temp = std::stoi(base, nullptr, 10);
			// if (temp == NULL)
			// 	std::cout << "int: impossible" << std::endl;
			// if (temp < -2147483648 || temp > 2147483647)
			// 	std::cout << "int: impossible" << std::endl;
			// else
			std::cout << "int: " << static_cast<int>(temp) << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cout << "int: impossible" << std::endl;
		}
		try
		{
			
		}
		catch(const std::exception& e)
		{
			std::cout << "float: impossible" << std::endl;
		}
		
	}
}
