#include "API.hpp"
#include <iostream>

namespace el {
	void VeryUsefulFunction(int important_argument) {
		std::cout << "Hello, world from the very useful function.\n";
		std::cout << "Why is " << important_argument << " so important?" << std::endl;
	}
}
