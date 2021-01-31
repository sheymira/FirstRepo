#include <iostream>
#include <vector>
#include "vectortests.h"
int main() {
	double signal_scalar = 2;
	std::vector<double> signal;
	int i;
	for(i=2; i<11; i+=2) {
		signal.push_back(i);
	}
	std::vector<double> scaled_signal = signal;
	scalar_multiply(signal_scalar, scaled_signal);
	double dot_product = vector_dot_product(signal, scaled_signal);
	std::cout << dot_product << std::endl;
	return 0;
}

