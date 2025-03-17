/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 10:52:07 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/17 11:20:14 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int	main()
{
	Data	test;
	uintptr_t	temp;
	Data		*tempdt;


	test.name = "raf";
	test.years = 19;

	std::cout << test.name << test.years << std::endl;
	temp = Serializer::serialize(&test);
	std::cout << temp << std::endl;
	tempdt = Serializer::deserialize(temp);
	std::cout << tempdt->name << tempdt->years << std::endl;
}