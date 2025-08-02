/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:51:07 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/02 21:00:39 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

// ScalarConverter::ScalarConverter(void)
// {
// 	//std::cout << "ScalarConverter void constructor called\n";
// }

// ScalarConverter::~ScalarConverter()
// {
// 	//std::cout << "Destructor for ScalarConverter called\n";
// }
// ScalarConverter::ScalarConverter(ScalarConverter const &cpy)
// {
// 	//std::cout << "Copy constructor called\n";
// 	*this = cpy;
// }
// ScalarConverter &ScalarConverter::operator=(ScalarConverter const &cpy)
// {
// 	//std::cout << "Copy assignment operator called\n";
// 	if (this == &cpy)
// 		return (*this);
// 	return (*this);
// }

// const char *ScalarConverter::exceptionNotDisplayablee::what() const throw()
// {
// 	return ("Error! You entered not displaylable character!\n!");
// }

static bool isPseudo(const std::string &s) {
    return s == "nan" || s == "nanf" ||
           s == "+inf" || s == "+inff" ||
           s == "-inf" || s == "-inff";
}

static bool isChar(const std::string &s) {
    return s.length() == 3 && s.front() == '\'' && s.back() == '\'';
}

// static bool isDouble(const std::string &s) {
//     return s.find('.') != std::string::npos &&
//            s.back() != 'f' &&
//            !isPseudo(s);
// }

// static bool isFloat(const std::string &s) {
//     return s.find('.') != std::string::npos &&
//            s.back() == 'f' &&
//            !isPseudo(s);
// }

// static bool isInt(const std::string &s) {
//     if (s.empty()) return false;
//     size_t i = 0;
//     if (s[i] == '+' || s[i] == '-') i++;
//     for (; i < s.length(); i++)
//         if (!std::isdigit(s[i])) return false;
//     return true;
// }

void ScalarConverter::convert(std::string const &str) {
    double value;
    bool iPseudo = isPseudo(str);
    bool iChar = isChar(str);

    if (iChar) {
        char c = str[1];
        value = static_cast<double>(c);
    } else if (iPseudo) {
        if (str == "nan" || str == "nanf")
            value = std::numeric_limits<double>::quiet_NaN();
        else if (str == "+inf" || str == "+inff")
            value = std::numeric_limits<double>::infinity();
        else
            value = -std::numeric_limits<double>::infinity();
    } else {
        try {
            size_t pos;
            value = std::stod(str, &pos);
            if (pos != str.length() && str.back() != 'f') {
                std::cerr << "Invalid input format\n";
                return;
            }
        } catch (const std::exception &e) {
            std::cerr << "Conversion error: " << e.what() << '\n';
            return;
        }
    }

    // CHAR
    std::cout << "char: ";
    if (std::isnan(value) || value < 0 || value > 127)
        std::cout << "impossible" << std::endl;
    else if (!std::isprint(static_cast<char>(value)))
        std::cout << "Non displayable" << std::endl;
    else
        std::cout << "'" << static_cast<char>(value) << "'" << std::endl;

    // INT
    std::cout << "int: ";
    if (std::isnan(value) || value > std::numeric_limits<int>::max() || value < std::numeric_limits<int>::min())
        std::cout << "impossible" << std::endl;
    else
        std::cout << static_cast<int>(value) << std::endl;

    // FLOAT
    std::cout << "float: ";
    std::cout << std::fixed << std::setprecision(1) << static_cast<float>(value) << "f" << std::endl;

    // DOUBLE
    std::cout << "double: ";
    std::cout << std::fixed << std::setprecision(1) << value << std::endl;
}
