#include "common.h"
#include <sstream>

using namespace std;

namespace prob15 {
	void main();

	struct position {
		int x;
		int y;
	};
	long findPaths(position spot);
}

namespace prob16 {
	void main();
}

namespace prob18 {
	void main();
	void findMax(vector< vector<int> >&, vector< vector<int> >& , int row = 0, int col = 0);
	void printTri(vector< vector<int> >&);
}
