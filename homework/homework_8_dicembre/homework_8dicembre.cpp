#include <iostream>
using namespace std;

// Ex.0
int euclid_recursive(int a, int b) {
	if (b == 0)		// condizione uscita
		return a;
	else
		return euclid_recursive(b, a % b);
}

int euclid_iterative(int a, int b) {
	while (b != 0) {	// condizione permanenza
		int remainder = a % b;
		a = b;
		b = remainder;
	}
	return a;
}

// Ex.1
void collatz_conjecture(int x) {
	if (x != 1) {
		if (x % 2 == 0)
			x = x / 2;
		else
			x = 3 * x + 1;
		cout << x << ", ";
		collatz_conjecture(x);
	}
}

int main() {
	collatz_conjecture(12);
	cout << endl << endl;
	collatz_conjecture(27);
	cout << endl << endl;
	collatz_conjecture(104);	
	cout << endl << endl;
	collatz_conjecture(420);
}

// Ex.2
bool primality_test(int x) {
	int counter = 0, divider = 1;
	while (counter <= 1 && divider <= x / 2) {
		if (x % divider == 0)
			counter++;
	}
	if (counter == 1)
		return true;
	else
		return false;
}

// Ex.3
void leibniz_series(int n, int num_iter) {
	int result = n;
	for (int i = 1; i < num_iter; i++) {
		if (i % 2 == 0)
			result = result + n / (i + 2);
		else
			result = result - n / (i + 2);
	}
	cout << result;
}