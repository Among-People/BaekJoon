#include <iostream>
using namespace std;

int main(void) {
	double A, B;
	cin >> A >> B;
	cout.precision(12);
	cout << fixed;
	cout << A / B << endl;
	cout.unsetf(ios::fixed);
	return 0;
}