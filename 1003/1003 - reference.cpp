#include <iostream>
using namespace std;
int fibonacci(int n, int& a, int& b);

int main(void) {
	int num, i, zero, one, fib;
	cin >> num;
	for (i = 0; i < num; i++) {
		one = 0;
		zero = 0;
		cin >> fib;
		fibonacci(fib, zero, one);
		cout << zero << " " << one << endl;
	}
	return 0;
}

int fibonacci(int n, int& a, int& b) {
	if (n == 0) {
		a++;
		return 0;
	}
	else if (n == 1) {
		b++;
		return 1;
	}
	else {
		return fibonacci(n - 1, a, b) + fibonacci(n - 2, a, b);
	}
}