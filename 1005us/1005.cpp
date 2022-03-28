#include <iostream>
using namespace std;

int main(void) {
	int T, N[1001], K[100001][100001], Nn, Kn, F;
	int i, j, temp1, temp2;
	// Get the number of cases
	cin >> T;

	for (i = 1; i < T; i++) {
		// Get the number of buildings (Nn), rules (Kn)
		cin >> Nn >> Kn;

		// Get values of consturcting times for each buildings
		for (j = 1; j < Nn; j++) {
			cin >> temp1;
			N[j] = temp1;
		}

		// Graph for rules
		for (j = 1; j < Kn; j++) {
			cin >> temp1 >> temp2;
			K[temp1][temp2] = 1;
		}

		// Target building
		cin >> F;



	}

	return 0;
}