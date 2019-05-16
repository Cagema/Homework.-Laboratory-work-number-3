#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Fano.h"
#include <stdio.h>
using namespace std;

void fano(string input);

int main(int argc, char* argv[]) {

    string input;
    getline(cin, input);
    fano(input);
    cout << endl;

/*
	string input = "it is test string!";
	fano(input);
	cout << endl;
*/
/*
	string input1 = "You only see what your eyes want to see";
	fano(input1);
	cout << endl;
*/
/*
	string input2 = "It's enough to make kings and vagabonds believe the very best.";
	fano(input2);
	cout << endl;
*/
/*
	string input3 = "C was the programming language developed at AT & T's Bell Laboratories of USA in 1972. It was written by a man name Dennis Ritchie.";
	fano(input3);
	cout << endl << endl;
*/
    //testing::InitGoogleTest(&argc, argv);
	//RUN_ALL_TESTS();

	return 0;
}

