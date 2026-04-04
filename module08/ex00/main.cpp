#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "easyfind.hpp"

int main() {
	std::cout << "---- vector" << std::endl;
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	try {
		std::vector<int>::iterator it = easyfind(vec, 5);
		std::cout << "found: " << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	try {
		std::vector<int>::iterator it = easyfind(vec, 6);
		std::cout << "found: " << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	std::cout << "\n---- list" << std::endl;
	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);

	try {
		std::list<int>::iterator it = easyfind(lst, 20);
		std::cout << "found: " << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	try {
		std::list<int>::iterator it = easyfind(lst, 40);
		std::cout << "found: " << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	std::cout << "\n---- deque" << std::endl;
	std::deque<int> deq;
	deq.push_back(100);
	deq.push_back(200);
	deq.push_back(300);

	try {
		std::deque<int>::iterator it = easyfind(deq, 300);
		std::cout << "found: " << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

    try {
		std::deque<int>::iterator it = easyfind(deq, 400);
		std::cout << "found: " << *it << std::endl;
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	std::cout << "\n---- empty container" << std::endl;
	std::vector<int> empty;
	try {
		easyfind(empty, 1);
	} catch (std::exception& e) {
		std::cout << "error: " << e.what() << std::endl;
	}

	return 0;
}
