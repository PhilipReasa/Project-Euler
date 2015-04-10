#include "shell.h"
using namespace std;


//run the shell that takes user input and runns the appropriate test
int main() {
	int problemNumber;
	displayInitialInfo();

	problemNumber=getProblemToRun();
	runProblemSolution(problemNumber);
	
	displayFinalInfo();
	return 0;
}

void displayInitialInfo() {
	cout << "\n\n"; //get some seperaton
	cout << "-------------" << endl;
	cout << "Welcome to Phil's Project Euler Solutions" << endl;
	cout << "\n";
	cout << "What project should be run? ";
}

void displayFinalInfo() {
	cout << "-------------" << endl;
}

int getProblemToRun() {
	int UproblemNum,problemNum;

	cin >> UproblemNum;
	if (UproblemNum > LAST_PROBLEM_DONE) {
		cout << "Problem input too large" <<endl;
		return -1;
	} else if (UproblemNum < 1) {
		cout << "Problem must be a positive integer" <<endl;
		return -1;
	} else {
		problemNum=UproblemNum;
		return problemNum;
	}
	return -1; //not possible
}

void runProblemSolution(int probNum) {
	time_t startTime,endTime;
	time(&startTime);

	switch(probNum) {
		case 1 : prob1::main();
			break;
		case 2 : prob2::main();
			break;
		case 3 : cout << largestPrimeFactor(600851475143) << endl;
			break; 
		case 4 : prob4::main();
			break;
		case 5 : prob5::main();
			break;
		default : cout << "Not mapped" << endl;
			break;
	}

	time(&endTime);
	cout << "Time passed: " << difftime(endTime,startTime) << "ms" << endl;
}
