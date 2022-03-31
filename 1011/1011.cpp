#include <iostream>
#include <cmath>
using namespace std;

int main(void) {
	int test, i;
	cin >> test;
	int x, y;
	int n;
	for (i = 0; i < test; i++) {
		cin >> x >> y;
		n = (int)sqrt(y - x);
		if (n * n == y - x)
			cout << 2 * n - 1 << endl;
		else if (n * n < y - x) {
			if (y - x <= n * (n + 1))
				cout << 2 * n << endl;
			else
				cout << 2 * n + 1 << endl;
		}
	}

	return 0;
}