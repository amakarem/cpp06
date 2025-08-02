/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aelaaser <aelaaser@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:15:02 by aelaaser          #+#    #+#             */
/*   Updated: 2025/08/02 19:19:56 by aelaaser         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main() {
    Data original;
    original.id = 123;
    original.name = "Example";

    std::cout << "Original pointer: " << &original << "\n";

    uintptr_t serialized = Serializer::serialize(&original);
    std::cout << "Serialized uintptr_t: " << serialized << "\n";

    Data* deserialized = Serializer::deserialize(serialized);
    std::cout << "Deserialized pointer: " << deserialized << "\n";

    // Validate the result
    if (deserialized == &original) {
        std::cout << "Success: deserialized pointer matches original.\n";
    } else {
        std::cout << "Error: deserialized pointer does NOT match original.\n";
    }

    // Output the contents to confirm
    std::cout << "Deserialized Data - id: " << deserialized->id 
              << ", name: " << deserialized->name << "\n";

    return 0;
}
