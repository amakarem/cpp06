/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:51:02 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/02 19:23:02 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Serializer_HPP
# define Serializer_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <exception>

struct Data {
    int id;
    std::string name;
};

class Serializer
{

	private:
		Serializer(void);
		~Serializer();
		Serializer(const Serializer &cpy);
		Serializer &operator = (Serializer const &org);
	public:
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif