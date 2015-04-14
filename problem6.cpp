#include "problem6.h"
using namespace std;

namespace prob6 {
	void main() {
		cout << squareOfSums(1,100) - sumOfSquares(1,100) <<endl;
	}
}

long int squareOfSums(int start, int end) {
	int currentNum;
	long int sum = 0;

	for (currentNum=start; currentNum <= end; currentNum++) {
		sum += currentNum;
	}
	
	return sum*sum;

}

long int sumOfSquares(int start, int end) {
	int currentNum;
	long int sum = 0;

	for( currentNum=start; currentNum <= end; currentNum++) {
		sum += currentNum*currentNum;
	}

	return sum;
}
