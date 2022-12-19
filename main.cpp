#include <iostream>
#include "ArrayPlus.h"
using namespace std;

int main(int argc, char* argv[]) {
	const int n = 5;
	int v[n] = { 1,2,3,4,5 };
	int answer;
	ArrayPlus vec = ArrayPlus(v, n);
	cout << "Welcome to ArrayPlus!\n\n";
	cout << "Do you want to edit the current array?\n";
	vec.PrintArrayPlus();
	cout << "\nyes (1) or no (2)\nanswer: ";
	cin >> answer;
	if (answer != 1 && answer != 2)
		cout << "Answer not valid, please try again: ";
	else
		if (answer == 1) {
			cout << '\n';
			for (int i = 0; i < n; i++) {
				cout << "Insert the " << i << " index element of the array: ";
				cin >> v[i];
			}
		}
	cout<<'\n';
	int tasks = 4;
	answer = 1;
	while (answer > 0 && answer < tasks) {
		cout << "What do you want to do?";
		cout << "\n1: print the current array\n2: right-shift the current array";
		cout << "\n3: sort the current array\n4: search for a value in the current array";
		cout << "\n0: end tasks"<<'\n';
		cout << "answer: ";
		cin >> answer;
		cout << '\n';
		if (answer < 0 or answer > tasks) {
			cout << "Answer not valid, please try again.\n\n";
			answer = 1;
		}
		else {
			if (answer == 0)
				cout << "Thank you!";
			if (answer == 1) {
				cout << "The current array is:\n";
				vec.PrintArrayPlus();
			}
			if (answer == 2) {
				cout << "The array created is:\n";
				vec.RightShiftArrayPlus();
				vec.PrintArrayPlus();
			}
			if (answer == 3) {
				cout << "The array created is:\n";
				vec.SortArrayPlus();
				vec.PrintArrayPlus();
			}
			if (answer == 4) {
				int value, index;
				cout << "What value are you searching for? ";
				cin >> value;
				index = vec.LinearSearchArrayPlus(value);
				if (index == -1)
					cout << "The value wasn't found.";
				else
					cout << "The value was found at index " << index << '.';
			}
			cout << "\n\n";
		}
	}
}