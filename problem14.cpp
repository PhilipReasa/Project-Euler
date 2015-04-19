#include "problem14.h"

using namespace std;

namespace prob14 {
	void main() {
	
		long maxLength = 0;
		long chainLength=0;
		int maxStartingNum;
		for( int i = 999999; i > 0; i--) {
			chainLength = CollatzChainLength(i);

			cout<<"start : "<<i<<" length is "<<chainLength<<endl;

			if (chainLength > maxLength) {
				maxLength=chainLength;
				maxStartingNum=i;
			}
		}

		cout<<maxStartingNum<<endl;;
	}

	long CollatzChainLength(long start) {
		static map<long,long> memo = map<long,long>();

		if(memo.count(start)> 0) {
			return memo[start];
		}

		if(start==1) { //base case
			memo[1]=1;
			return 1;
		} else if (start%2==0) { //even
			memo[start] = CollatzChainLength(start/2) + 1;
			return memo[start];
		} else { //odd
			memo[start] = CollatzChainLength((start*3)+1) + 1;
			return memo[start];
		}
	}
}
