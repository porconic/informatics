#include "ArrayPlus.h"
#include <iostream>
using namespace std;

ArrayPlus::ArrayPlus(int* v, int size) {
	this->v = v;
	this->size = size;
}
void ArrayPlus::PrintArrayPlus() {
	for (int i = 0; i < size; i++) {
		cout << v[i] << "  ";
	}
}
void ArrayPlus::RightShiftArrayPlus() {
	int temp = v[size - 1];
	for (int i = size-1; i > 0; i--) {
		v[i] = v[i - 1];
	}
	v[0] = temp;
}
void ArrayPlus::SortArrayPlus() {
	for (int i = 1; i < size; i++) {
		int temp = v[i];
		int j = i - 1;
		while (v[j] > temp && j >= 0) {
			v[j + 1] = v[j];
			j--;
		}
		v[j + 1] = temp;
	}
}
int ArrayPlus::LinearSearchArrayPlus(int value) {
	for (int i = 0; i < size - 1; i++)
		if (v[i] == value)
			return i;
	return -1;
}