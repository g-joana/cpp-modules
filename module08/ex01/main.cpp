#include <iostream>
#include <cstdlib>
#include "Span.hpp"

int main() {
	std::cout << "---- subject test" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	std::cout << "\n---- overflow" << std::endl;
	try {
		sp.addNumber(42);
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	std::cout << "\n---- too few elements" << std::endl;
	Span sp2(1);
	sp2.addNumber(1);
	try {
		std::cout << sp2.shortestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	std::cout << "\n---- empty span" << std::endl;
	Span sp3(5);
	try {
		std::cout << sp3.longestSpan() << std::endl;
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	std::cout << "\n---- 10000 numbers" << std::endl;
	Span big(10000);
	std::srand(42);
	for (int i = 0; i < 10000; i++)
		big.addNumber(std::rand());
	std::cout << "shortest: " << big.shortestSpan() << std::endl;
	std::cout << "longest:  " << big.longestSpan() << std::endl;

	std::cout << "\n---- addRange" << std::endl;
	Span sp4(5);
	std::vector<int> v;
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	v.push_back(50);
	sp4.addRange(v.begin(), v.end());
	std::cout << "shortest: " << sp4.shortestSpan() << std::endl;
	std::cout << "longest:  " << sp4.longestSpan() << std::endl;

	std::cout << "\n---- addRange overflow" << std::endl;
	Span sp5(3);
	sp5.addNumber(1);
	try {
		sp5.addRange(v.begin(), v.end());
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	return 0;
}
