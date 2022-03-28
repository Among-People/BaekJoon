#include <iostream>
using namespace std;

int main(void) {

	int num, temp;
	int i;
	int fib[41];
	cin >> num;

	fib[0] = 0;
	fib[1] = 1;

	for (i = 2; i < 41; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}

	for (i = 0; i < num; i++) {
		cin >> temp;
		if (temp == 0)
			cout << "1 0" << endl;
		else
			cout << fib[temp - 1] << " " << fib[temp] << endl;
	}
	return 0;
}