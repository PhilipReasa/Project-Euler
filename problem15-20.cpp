#include "problem15-20.h"

using namespace std;

namespace prob15 {
	void main() {
		position spot;
		spot.x=0;
		spot.y=0;

		cout<<findPaths(spot)<<endl;
	}

	long findPaths(position spot) {
		static long grid[21][21] = {};
		long tempPaths=0;

		if (spot.x ==20 && spot.y==20) {
			return 1;
		}

		long toReturn=0;
		if (grid[spot.x][spot.y]>0) {
			return grid[spot.x][spot.y];
		} else {
			if (spot.x<20) {
				position newSpot(spot);
				newSpot.x++;

				tempPaths=findPaths(newSpot);
				toReturn+=tempPaths;
			}

			if (spot.y<20) {
				position newSpot(spot);
				newSpot.y++;

				tempPaths=findPaths(newSpot);
				toReturn+=tempPaths;
			}

			grid[spot.x][spot.y] = toReturn;
		}

		return toReturn;
	}
}

namespace prob16 {
	void main() {
		
	}
}

namespace prob18 {
	void main() {
		//here is our tree!
		string triangleData = R"(75
95 64
17 47 82
18 35 87 10
20 04 82 47 65
19 01 23 75 03 34
88 02 77 73 07 63 67
99 65 04 28 06 16 70 92
41 41 26 56 83 40 80 70 33
41 48 72 33 47 32 37 16 94 29
53 71 44 65 25 43 91 52 97 51 14
70 11 33 28 77 73 17 78 39 68 17 57
91 71 52 38 17 14 91 43 58 50 27 29 48
63 66 04 68 89 53 67 30 73 16 69 87 40 31
04 62 98 27 23 09 70 98 73 93 38 53 60 04 23)";

		//lets load it into a 2D vector
		stringstream ss;
		ss << triangleData;

		int row=0;
		int col=0;
		int readInValue;
		vector< vector<int> > tri(15, vector<int> (15));

		while(!ss.eof()) {
			ss >> readInValue;
			tri[row][col] = readInValue;
			if (col == row) {
				row ++;
				col = 0;
			} else {
				col ++;
			}
		}

		//now that we have our triange data, lets find the max paths
		vector< vector<int> > maxPath(15, vector<int> (15));
		findMax(tri, maxPath);

		//now we have all max outcomes, lets find the max of them
		int max = 0;
		for(int i = 0; i < 15; i ++) {
			if(maxPath[14][i] > max) {
				max = maxPath[14][i];
			}
		}
		
		//printTri(tri);
		//printTri(maxPath);

		cout << max << endl;
	}

	void findMax(vector< vector<int> >& data, vector< vector<int> >& memo, int row , int col ) {
		static vector< vector<bool> >visited(15, vector<bool> (15));
		
		if(visited[row][col]) {
			return;
		}

		int aboveVal = 0;
		int leftVal = 0;

		if(row > 0 && col < row) {
			//before we look at the value above, we might have to populate it
			if(!visited[row-1][col]) {
				findMax(data, memo, row -1, col);
			}
			aboveVal = memo[row - 1][col];
		}

		if(row > 0 && col > 0) {
			//the left side of the tree is filled first, so memo will always be 
			//visited in this case
			leftVal = memo[row - 1][col - 1];
		}

		memo[row][col] = max(aboveVal, leftVal) + data[row][col];
		visited[row][col] = true;

		if(row + 1 < 15) {
			findMax(data, memo, row+1, col);

			if(col + 1 < 15) {
				findMax(data, memo, row+1, col+1);
			}
		}
	}

	void printTri(vector< vector<int> >& tri) {
		//print the triagle
		int row = 0;
		int col = 0;
		while(row < 15 && col < 15) {
			cout << tri[row][col] << " ";
			if (col == row) {
				row ++;
				col = 0;
				cout << endl;
			} else {
				col ++;
			}
		}
	}
}
