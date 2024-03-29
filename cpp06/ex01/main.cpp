/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tanota <tanota@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/14 16:04:51 by tanota            #+#    #+#             */
/*   Updated: 2024/03/14 16:21:47 by tanota           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main ()
{
	// Create a Data object
	Data data;
	data.number = 42;
	data.name = "Bob";

	// Serialize the pointer to the Data object
	uintptr_t raw = Serializer::serialize(&data);
	std::cout << "Serialized data: " << raw << std::endl;

	// Deserialize the uintptr_t to a Data pointer
	Data* deserialized = Serializer::deserialize(raw);
	std::cout << "Deserialized data number: " << deserialized->number << std::endl;
	std::cout << "Deserialized data name: " << deserialized->name << std::endl;

	// Check if the deserialized pointer is equal to the original pointer
	if (&data == deserialized)
		std::cout << "Pointers are equal. Deserialization worked correctly!" << std::endl;
	else
		std::cout << "Pointers are not equal. Deserialization failed!" << std::endl;

	return (0);
}
