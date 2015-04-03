#include "problem3.h"
using namespace std;

int largestPrimeFactor(long num) {
	//find the highest prime factor

	//strategy: divide by small numbers to get prime factorizations
	int largestPrimeFactor = 1;
	long numLeftToFactor = num;
	int descoveredFactor;
	while ( numLeftToFactor > largestPrimeFactor ) {
		descoveredFactor = smallestFactor(numLeftToFactor);
		if (descoveredFactor == 1) {
			//we are done with our factorization, but we need to consider the recuprical of the 1
			if (numLeftToFactor > largestPrimeFactor) {
				largestPrimeFactor = numLeftToFactor;
			}
			
			break; 
		}

		if (descoveredFactor > largestPrimeFactor) {
			largestPrimeFactor = descoveredFactor;
		}

		numLeftToFactor /= descoveredFactor;
	}

	return largestPrimeFactor;

}

int smallestFactor(long num) { //greater than 1
	int test = 2;
	int smallestFactor=1;
	double numRoot = sqrt(num);

	while (test < numRoot && smallestFactor <= 1) {
		if (num % test == 0) {
			smallestFactor = test;
		}

		test ++;
	}

	return smallestFactor;
}
