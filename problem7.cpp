#include "problem7.h"
using namespace std;

namespace prob7 {
	void main() {

		int count = 0;
		long int nextToCheck = 2;

		while ( count < 10001) {
			if (isPrime(nextToCheck)) {
				count ++;
			}

			if (nextToCheck % 1000000 == 0) {
				//cout << "mill" <<endl;
			}

			nextToCheck ++;
		}

		cout << --nextToCheck << endl;

	}
}

bool isPrime( long int in) {
	long int check;
	long int highest = sqrt(in)/1 + 1;

	for (check = 2; check < highest; check++) {
		if (in % check == 0 ) {
			return false;
		}
	}
	return true;
}
