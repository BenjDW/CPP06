/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ScalarConverter.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 05:17:19 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/15 07:29:40 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ostream>
#include <iomanip>
#include <string>
#include <exception>
#include <fstream>

class	ScalarConverter
{
	public:
		ScalarConverter();
		ScalarConverter(ScalarConverter &cpy);
		~ScalarConverter();
		ScalarConverter &operator=(ScalarConverter const &cpy);
		static void convert(std::string base);
		
	private:

};