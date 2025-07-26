/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 14:52:13 by aelaaser          #+#    #+#             */
/*   Updated: 2025/07/26 19:27:02 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: " << argv[0] << " <literal1> [literal2] ...\n";
        return 1;
    }

    for (int i = 1; i < argc; ++i) {
        std::string input = argv[i];
        //std::cout << "Input: " << input << std::endl;
        ScalarConverter::convert(input);
        std::cout << "------------------------" << std::endl;
    }

    return 0;
}
