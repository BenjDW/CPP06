/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:53:12 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/17 11:26:29 by bde-wits         ###   ########.fr       */
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
#include <stdint.h>

typedef struct Data
{
	std::string	name;
	int			years;
}	Data;


class Serializer
{
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
	private:
		Serializer();
		Serializer(Serializer &cpy);
		~Serializer();
		Serializer& operator=(Serializer const &cpy);

};
