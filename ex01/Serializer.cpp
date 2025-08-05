/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:07:00 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/05 15:41:08 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

//reinterpret_cast is a type of cast used to convert one pointer or reference type into another, even if the types are not related.
// uintptr_t is an unsigned integer type defined in <cstdint>.
// It is guaranteed to be large enough to hold a pointer value (i.e., you can safely cast a pointer to a uintptr_t and back).
// Takes a pointer (Data*) Converts it to a raw integer address (uintptr_t)
uintptr_t Serializer::serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}
// Takes the raw integer back Reinterprets it as a pointer to Data
Data* Serializer::deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data*>(raw));
}
