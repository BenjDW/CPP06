/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:43:29 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/17 14:22:42 by bde-wits         ###   ########.fr       */
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
// #include <ctime.h>

class Base
{
	public:
		virtual	~Base();
};
	
Base *generate(void);
// void identify(Base* p);
// void identify(Base& p);

// Base::~Base()
// {
// }