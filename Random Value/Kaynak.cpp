#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;



int main() {
	int randomNumber, inputNumber;

	cout << "Enter a number in the range of 1 to 100:" << endl;
	cin >> inputNumber;

	if (inputNumber < 1 || inputNumber>100) {
		cout << "Please enter a number in the interval! " << endl;

	}
	else {
		srand(time(NULL));
		randomNumber = rand() % 100 + 1;
		if (randomNumber == inputNumber) {
			cout << "True!" << endl;

		}
		else {
			cout << "False! Random value is: "<< randomNumber << endl;
		}
	}



 }