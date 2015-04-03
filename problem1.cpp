#include "problem1.h"
using namespace std;

namespace prob1 {
	void main() {
		//find sum of all multiples of 3 and 5 below 1000

		//**niave: find all multiples and summ them

		//**advanced: recognize that the multiple tells us about its sum
		int numMultiplesOf3Below = X / 3;
		int numMultiplesOf5Below = X / 5;

		int the3Coeficient = (numMultiplesOf3Below + 1)/2;
		int the5Coeficient = (numMultiplesOf5Below + 1)/2;

		int sumOf3s = the3Coeficient * 3 * numMultiplesOf3Below;
		int sumOf5s = the5Coeficient * 5 * numMultiplesOf5Below;

		//now we have to remove the overlap
		int numMultiplesOf15Below = X / 15;
		int the15Coeficient = (numMultiplesOf15Below + 1)/2;
		int sumOf15s = the15Coeficient * 15 * numMultiplesOf15Below;

		cout << sumOf3s + sumOf5s - sumOf15s << endl;
	}
}
