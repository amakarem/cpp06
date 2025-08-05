/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:31:23 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/05 15:44:17 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"

class A : public Base
{
private:

public:
	A();
	virtual ~A();
	A(const A &cpy);
	A &operator = (A const &org);
};
