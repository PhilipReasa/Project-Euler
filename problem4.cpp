#include "problem4.h"
using namespace std;

namespace prob4 {
	void main() {
		//largest palendropic number created by multiplying two three digit numbers
		int firstnum=999;
		int secondNum=999;
		int largestPalendrome=0;
		int product=firstnum*secondNum;

		while (firstnum > 0) {
			secondNum=999;
			while (secondNum > 0) {
				product = firstnum*secondNum;
				if (isPalendrome(product) && product > largestPalendrome) {
					largestPalendrome=product;
				}
				secondNum --;
			}
			firstnum --;
		}

		cout << largestPalendrome << endl;
	}

	bool isPalendrome(int num) {
		string numString = to_string(num);

		char first, last;
		bool palendrome=true;

		while (numString.length() > 1 && palendrome) {
			first = numString.at(0);
			last  = numString.at(numString.length()-1);

			if (first!=last) {
				palendrome=false;
			}

			numString = numString.substr(1,numString.length()-2);
		}

		return palendrome;
	}
}
