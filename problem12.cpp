#include "problem12.h"

namespace prob12 {
	void main() {
		int numDivisors = 0;
		int testTriangleNum;
		for (int i = 1; numDivisors<=500; i++) {
			testTriangleNum = findTriangeNum(i);
			numDivisors = countDividors(testTriangleNum);
		}

		std::cout<< testTriangleNum<<std::endl;
	}

	int countDividors(int num) {
		int divisors = 0;
		
		for (int i = 1; i <= num; i++) {
			if (num % i == 0) {
				divisors++;
			}
		}
		return divisors;
	}

	int findTriangeNum(int number) {
		int toReturn = 0;
		for (int i = 1; i <= number; i++) {
			toReturn += i;
		}

		return toReturn;
	}
}
