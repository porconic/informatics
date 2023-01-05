#include <iostream>
using namespace std;

//	Ex.1
unsigned long long factorial_tail_recursive(unsigned n, unsigned long long accumulator) {
	if (n == 1)
		return accumulator;
	else {
		accumulator *= n;
		return factorial_tail_recursive(n - 1, accumulator);
	}
}

//	Ex.2
int sum_recursive(int a, int b) {
	int sum{};
	if (b == 0)
		return a;
	if (b > 0) {
		sum = sum_recursive(a, b - 1) + 1;
	}
	return sum;
}

//	Ex.3
int sum_array_recursive(int v[], int size) {
	if (size == 1)
		return v[0];
	if (size > 1)
		return v[0] + sum_array_recursive(v + 1, size - 1);
}

//	Ex.4
int moltiplication_array_recursive(int v[], int size) {
	if (size == 1)
		return v[0];
	if (size > 1)
		return v[0] * moltiplication_array_recursive(v + 1, size - 1);
}

//	Ex.5
class point{
private:
	int x;
	int y;
public:
	point(int x, int y) {
		this->x = x;
		this->y = y;
	}

	float distance(const point& p) {
		return sqrt((this->x - p.x) * (this->x - p.x) + (this->y - p.y) * (this->y - p.y));
	}
};

int main() {
	point bisector_second_forth_quadrant[] = { { -1, 1 }, { 3, -3 } };
}

//	Ex.6
int max_sum_row(int mat[][6], int num_rows) {
	int max_sum, sum, max_index{};
	for (int i = 0; i < num_rows; i++) {
		sum = 0;
		for (int j = 0; j < 6; j++)
			sum += mat[i][j];
		if (i == 0)
			max_sum = sum;
		else
			if (sum > max_sum) {
				max_sum = sum;
				max_index = i;
			}
	}
	return max_index;
}

//	Ex.7
// Da C il compilatore passa alla classe A che stampa, per poi passare alla classe B che stampa, per poi tornare alla C che stampa

//	Ex.10
void* (*ptr_function)(char*);

//	Ex.11
void reverse(const char* str, char* rev_str, size_t size) {
	rev_str[size - strlen(str)] = str[strlen(str) - 1];
	reverse(str - 1, rev_str, size);
}
