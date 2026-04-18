#include "PmergeMe.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <stdexcept>

PmergeMe::PmergeMe() : _vecTime(0), _deqTime(0) {}

PmergeMe::PmergeMe(const PmergeMe& other)
	: _vec(other._vec), _deq(other._deq), _original(other._original),
	  _vecTime(other._vecTime), _deqTime(other._deqTime) {}

PmergeMe& PmergeMe::operator=(const PmergeMe& other) {
	if (this != &other) {
		_vec = other._vec;
		_deq = other._deq;
		_original = other._original;
		_vecTime = other._vecTime;
		_deqTime = other._deqTime;
	}
	return *this;
}

PmergeMe::~PmergeMe() {}

void PmergeMe::parse(int argc, char** argv) {
	for (int i = 1; i < argc; i++) {
		std::string arg = argv[i];
		if (arg.empty())
			throw std::runtime_error("Error");
		for (size_t j = 0; j < arg.length(); j++) {
			if (arg[j] < '0' || arg[j] > '9')
				throw std::runtime_error("Error");
		}
		long num = std::atol(arg.c_str());
		if (num < 0 || num > 2147483647L)
			throw std::runtime_error("Error");
		_vec.push_back(static_cast<int>(num));
		_deq.push_back(static_cast<int>(num));
	}
	_original = _vec;
}

std::vector<int> PmergeMe::generateJacobsthal(int n) {
	std::vector<int> jacob;
	jacob.push_back(0);
	jacob.push_back(1);
	while (jacob.back() < n) {
		int next = jacob[jacob.size() - 1] + 2 * jacob[jacob.size() - 2];
		jacob.push_back(next);
	}
	std::vector<int> order;
	for (size_t i = 2; i < jacob.size(); i++) {
		int start = jacob[i];
		int end = jacob[i - 1];
		if (start > n)
			start = n;
		for (int j = start; j > end; j--)
			order.push_back(j - 1);
	}
	return order;
}

void PmergeMe::fordJohnsonVec(std::vector<int>& arr) {
	if (arr.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int unpaired = -1;
	bool hasUnpaired = arr.size() % 2 != 0;
	if (hasUnpaired)
		unpaired = arr[arr.size() - 1];

	for (size_t i = 0; i + 1 < arr.size(); i += 2) {
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}

	std::vector<int> largers;
	for (size_t i = 0; i < pairs.size(); i++)
		largers.push_back(pairs[i].first);
	fordJohnsonVec(largers);

	std::vector<int> pend;
	for (size_t i = 0; i < largers.size(); i++) {
		for (size_t j = 0; j < pairs.size(); j++) {
			if (pairs[j].first == largers[i]) {
				pend.push_back(pairs[j].second);
				pairs.erase(pairs.begin() + j);
				break;
			}
		}
	}

	std::vector<int> main = largers;

	if (!pend.empty())
		main.insert(main.begin(), pend[0]);

	if (pend.size() > 1) {
		std::vector<int> order = generateJacobsthal(pend.size());
		for (size_t i = 0; i < order.size(); i++) {
			int idx = order[i];
			if (idx < 1 || idx >= (int)pend.size())
				continue;
			int val = pend[idx];
			std::vector<int>::iterator pos = std::lower_bound(main.begin(), main.end(), val);
			main.insert(pos, val);
		}
	}

	if (hasUnpaired) {
		std::vector<int>::iterator pos = std::lower_bound(main.begin(), main.end(), unpaired);
		main.insert(pos, unpaired);
	}

	arr = main;
}

void PmergeMe::fordJohnsonDeq(std::deque<int>& arr) {
	if (arr.size() <= 1)
		return;

	std::vector<std::pair<int, int> > pairs;
	int unpaired = -1;
	bool hasUnpaired = arr.size() % 2 != 0;
	if (hasUnpaired)
		unpaired = arr[arr.size() - 1];

	for (size_t i = 0; i + 1 < arr.size(); i += 2) {
		if (arr[i] > arr[i + 1])
			pairs.push_back(std::make_pair(arr[i], arr[i + 1]));
		else
			pairs.push_back(std::make_pair(arr[i + 1], arr[i]));
	}

	std::deque<int> largers;
	for (size_t i = 0; i < pairs.size(); i++)
		largers.push_back(pairs[i].first);
	fordJohnsonDeq(largers);

	std::deque<int> pend;
	for (size_t i = 0; i < largers.size(); i++) {
		for (size_t j = 0; j < pairs.size(); j++) {
			if (pairs[j].first == largers[i]) {
				pend.push_back(pairs[j].second);
				pairs.erase(pairs.begin() + j);
				break;
			}
		}
	}

	std::deque<int> main = largers;

	if (!pend.empty())
		main.insert(main.begin(), pend[0]);

	if (pend.size() > 1) {
		std::vector<int> order = generateJacobsthal(pend.size());
		for (size_t i = 0; i < order.size(); i++) {
			int idx = order[i];
			if (idx < 1 || idx >= (int)pend.size())
				continue;
			int val = pend[idx];
			std::deque<int>::iterator pos = std::lower_bound(main.begin(), main.end(), val);
			main.insert(pos, val);
		}
	}

	if (hasUnpaired) {
		std::deque<int>::iterator pos = std::lower_bound(main.begin(), main.end(), unpaired);
		main.insert(pos, unpaired);
	}

	arr = main;
}

void PmergeMe::sort() {
	clock_t start, end;

	start = clock();
	fordJohnsonVec(_vec);
	end = clock();
	_vecTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;

	start = clock();
	fordJohnsonDeq(_deq);
	end = clock();
	_deqTime = static_cast<double>(end - start) / CLOCKS_PER_SEC * 1000000.0;
}

void PmergeMe::display() {
	std::cout << "Before:";
	for (size_t i = 0; i < _original.size(); i++)
		std::cout << " " << _original[i];
	std::cout << std::endl;

	std::cout << "After: ";
	for (size_t i = 0; i < _vec.size(); i++)
		std::cout << " " << _vec[i];
	std::cout << std::endl;

	std::cout << "Time to process a range of " << _original.size()
		<< " elements with std::vector : " << _vecTime << " us" << std::endl;
	std::cout << "Time to process a range of " << _original.size()
		<< " elements with std::deque  : " << _deqTime << " us" << std::endl;
}
