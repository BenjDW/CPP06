/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 06:25:13 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/17 09:19:37 by bde-wits         ###   ########.fr       */
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
			if (temp >= 0 && temp <= 32)
				std::cout << "char : not displayable" << std::endl;
			else if (temp < 33 || temp > 176)
				std::cout << "char: impossible" << std::endl;
			else
				std::cout << "char: " << static_cast<char>(temp) << std::endl;
			std::cout << "int: " << temp << std::endl;
		}

		stream.clear();
		stream.seekg(0);
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
