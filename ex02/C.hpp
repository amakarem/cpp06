/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:31:23 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/02 20:56:21 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"

class C : public Base
{
private:

public:
	C();
	~C();
	C(const C &cpy);
	C &operator = (C const &org);
};
