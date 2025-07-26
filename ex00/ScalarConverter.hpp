/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:51:02 by aelaaser          #+#    #+#             */
/*   Updated: 2025/07/26 17:10:11 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ScalarConverter_HPP
# define ScalarConverter_HPP

#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
#include <exception>

class ScalarConverter
{
	protected:

	public:
		ScalarConverter(void);
		~ScalarConverter();
		ScalarConverter(const ScalarConverter &cpy);
		ScalarConverter &operator = (ScalarConverter const &org);
		
		static void	convert(const std::string& str);
		// class exceptionNotDisplayablee : public std::exception
		// {
		// 	public:

		// 		virtual const char *what() const throw();
		// };
};

#endif