/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 05:17:19 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/20 11:49:30 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include <exception>
#include <fstream>
#include <cstdlib>
#include <limits>
#include <sstream>

class	ScalarConverter
{
	public:
		static void convert(std::string base);
	private:
		ScalarConverter();
		ScalarConverter(std::string in);
		ScalarConverter(ScalarConverter &cpy);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &cpy);
		std::string	imput;
};