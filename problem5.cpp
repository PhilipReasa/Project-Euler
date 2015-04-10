#include "problem5.h"
using namespace std;

namespace prob5 {
	void main() {
		//smallest numbler divisible by 1...20

		//naive solution. elegant solution would requier prime factorizations

		long int multipleToTest;
		bool done = false;
		int i;

		for (multipleToTest = 2520; !done; multipleToTest += 2520) {
			done = true;
			for ( i = 2; i <=20 && done; i++) {
				if (multipleToTest % i != 0) {
					done=false;
				} 
			}
			if (done == true) {
				break;
			}
		}

		cout << multipleToTest << endl;
	}
}
