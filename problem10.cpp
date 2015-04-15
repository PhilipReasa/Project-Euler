#include "problem10.h"
using namespace std;

namespace prob10 {
	void main() {
		long int sum = 2; //skipping 2 in the loop so that we can incremembt by 2 easier

		for(long int check=3; check<2000000; check+=2) {
			if(isPrime(check)) {
				sum +=check;
			}
		}

		cout << sum <<endl;
	}
}
