/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:43:39 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/17 14:22:40 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"


// It randomly instantiates A, B, or C and returns the instance as a Base pointer. Feel free
// to use anything you like for the random choice implementation.

// Base *generate(void)
// {
// 	int randomindex = rand() % 3;
	
// 	if (randomindex == 0) // create A
// 		return new A();
// 	else if (randomindex == 1) // create B
// 		return new B();
// 	else // create C
// 		return new C();
// }

Base::~Base() {}

// void identify(Base* p)
// {

// }

// void identify(Base& p)
// {
	
// }