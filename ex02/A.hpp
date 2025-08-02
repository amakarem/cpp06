/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:31:23 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/02 20:35:20 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"

class A : public Base
{
private:

public:
	A();
	~A();
	A(const A &cpy);
	A &operator = (A const &org);
};
