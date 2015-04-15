#include "problem9.h"
#include <assert.h>
#include "math.h"

using namespace std;

namespace prob9 {
	void main() {
		//find a^2 + b^2 = c^2 such that a+b+c = 1000

		//strategy: using with an a & b we can determine c.
		for(int a = 1; a < 1000; a++) {
			for (int b=1; b+a<1000; b++) {
				if (check(a,b)) {
					cout << a*b*findC(a,b) << endl;	
					return;
				}
			}
		}
	}

	bool check(int a, int b) {
		assert(a+b<1000);

		int c = findC(a,b);
		if (pow(a,2)+pow(b,2)==pow(c,2)) {
			return true;
		}

		return false;
	}

	int findC(int a, int b) {
		return 1000-(a+b);
	}
}
