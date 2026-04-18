#include "PmergeMe.hpp"
#include <iostream>

int main(int argc, char** argv) {
	if (argc < 2) {
		std::cerr << "Error" << std::endl;
		return 1;
	}
	try {
		PmergeMe sorter;
		sorter.parse(argc, argv);
		sorter.sort();
		sorter.display();
	} catch (std::exception& e) {
		std::cerr << e.what() << std::endl;
		return 1;
	}
	return 0;
}
