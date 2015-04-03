#include "problem2.h"
using namespace std;

namespace prob2 {
	void main() {
		//find sum of all even fib numbers < 4mill

		int currentFib,previousFib,nextFib,runningSum,tempCurrentFib;
		previousFib = 1;
		currentFib = 2;
		nextFib=3;
		runningSum=2; //our loop is not using the 2 that starts the sequence

		while(nextFib <= 4000000) { 
			
			if (nextFib % 2 == 0) { //even
				runningSum+=nextFib;
			}

			previousFib=currentFib;
			tempCurrentFib=currentFib;
			currentFib=nextFib;
			nextFib+=tempCurrentFib;
		}

		cout << runningSum << endl;
	}
}
