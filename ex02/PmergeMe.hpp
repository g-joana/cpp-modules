#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <string>

class PmergeMe {
public:
	PmergeMe();
	PmergeMe(const PmergeMe& other);
	PmergeMe& operator=(const PmergeMe& other);
	~PmergeMe();

	void parse(int argc, char** argv);
	void sort();
	void display();

private:
	std::vector<int> _vec;
	std::deque<int> _deq;
	std::vector<int> _original;
	double _vecTime;
	double _deqTime;

	void fordJohnsonVec(std::vector<int>& arr);
	void fordJohnsonDeq(std::deque<int>& arr);

	std::vector<int> generateJacobsthal(int n);
};

#endif
