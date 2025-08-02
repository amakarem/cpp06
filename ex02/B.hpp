/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:31:23 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/02 20:55:22 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Base.hpp"

class B : public Base
{
private:

public:
	B();
	~B();
	B(const B &cpy);
	B &operator = (B const &org);
};
