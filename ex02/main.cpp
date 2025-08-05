/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 15:45:35 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/05 18:25:05 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <cstdlib>
#include <ctime>

Base	*generate(void)
{
	int			i;

	i = std::rand() % 3;
	switch (i)
	{
	case 0:
		std::cout << "Generated: A" << std::endl;
		return (new A);
	case 1:
		std::cout << "Generated: B" << std::endl;
		return (new B);
	default:
		std::cout << "Generated: C" << std::endl;
		return (new C);
	}
}

void	identify(Base *p)
{
	if (dynamic_cast<A *>(p))
		std::cout << "identify object as Class A by (identify(Base *p))\n";
	else if (dynamic_cast<B *>(p))
		std::cout << "identify object as Class B by (identify(Base *p))\n";
	else if (dynamic_cast<C *>(p))
		std::cout << "identify object as Class C by (identify(Base *p))\n";
	else
		std::cout << "identify object as unkown Class by (identify(Base *p))\n";
}

void	identify(Base &p)
{
	std::cout << std::endl;
	try
	{
		std::cout << "Trying to cast to A" << std::endl;
		A &a = dynamic_cast<A &>(p);
		std::cout << "Identified class: A (identify(Base &p))" << std::endl;
		(void)a;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Identified class: unknown (identify(Base &p))" << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	try
	{
		std::cout << "Trying to cast to B" << std::endl;
		B &b = dynamic_cast<B &>(p);
		std::cout << "Identified class: B (identify(Base &p))" << std::endl;
		(void)b;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Identified class: unknown (identify(Base &p))" << std::endl;
	}
	std::cout << "---------------------" << std::endl;
	try
	{
		std::cout << "Trying to cast to C" << std::endl;
		C &c = dynamic_cast<C &>(p);
		std::cout << "Identified class: C (identify(Base &p))" << std::endl;
		(void)c;
	}
	catch (std::bad_cast &bc)
	{
		std::cout << "Identified class: unknown (identify(Base &p))" << std::endl;
	}
	std::cout << std::endl;
}

int	main(void)
{
	Base	*base;

	for (int i = 0; i < 6; i++)
	{
		std::cout << "Test:" << i << std::endl;
		base = generate();
		identify(base);
		identify(*base);
		std::cout << "================================ " << std::endl;
		delete base;
	}
	return (0);
}
