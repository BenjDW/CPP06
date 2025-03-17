/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 06:25:13 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/17 08:43:24 by bde-wits         ###   ########.fr       */
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
	std::istringstream stream(base);
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
		if (base == "nan" || base == "nanf")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: nanf" << std::endl;
			std::cout << "double: nan" << std::endl;
			return;
		}
		if (base == "+inf" || base == "+inff" || base == "inf" || base == "inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: +inff" << std::endl;
			std::cout << "double: +inf" << std::endl;
			return;
		}
		if (base == "-inf" || base == "-inff")
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: -inff" << std::endl;
			std::cout << "double: -inf" << std::endl;
			return;
		}
		//convert into int
		stream.clear();
		stream.seekg(0);
		stream >> temp;
		if (stream.fail() == true)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else if (temp < -2147483648 || temp > 2147483647)
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
		}
		else
		{
			//convert into char
			if (temp >= 0 && temp <= 32)
				std::cout << "char : not displayable" << std::endl;
			else if (temp < 33 || temp > 176)
				std::cout << "char: impossible" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(temp) << std::endl;
			std::cout << "int: " << temp << std::endl;
		}
		//convert into float/double
		stream.clear();// clear error
		stream.seekg(0);// cursor to (pos)
		stream >> tempf;
		if (stream.fail() == true)
		{
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
		else
		{
			std::cout << "float: " << static_cast<float>(tempf) << "f" << std::endl;
			std::cout << "double: " << tempf << std::endl;
		}
	}
}
