/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bde-wits <bde-wits@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 11:27:54 by bde-wits          #+#    #+#             */
/*   Updated: 2025/03/17 14:16:44 by bde-wits         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base *generate(void)
{
	int randomindex = rand() % 3;
	
	if (randomindex == 0) // create A
		return new A();
	else if (randomindex == 1) // create B
		return new B();
	else // create C
		return new C();
}

int	main()
{
	Base *test = generate();

	delete test;
}

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