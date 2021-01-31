#include <iostream>
#include <vector>
#include "vectortests.h"
void scalar_multiply(double scalar, std::vector<double> &d_vector) {
	int i, vector_size=d_vector.size();
	for(i=0; i<vector_size; i++) {
		d_vector[i] *= scalar;
	}
}
double vector_dot_product(std::vector<double> first_vector,
		std::vector<double> second_vector) {
	int i, j;
	int fvector_size = first_vector.size();
	double result = 0;
	10
		if(fvector_size != second_vector.size()) {
			std::cout << "Incompatable sizes, returning 0..." << std::endl;
			return result;
		}
	for(i=0; i<fvector_size; i++) {
		result += first_vector[i] * second_vector[i];
	}
	return result;
}
