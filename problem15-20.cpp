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
