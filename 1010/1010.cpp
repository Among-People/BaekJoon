#include <iostream>
using namespace std;

int main(void) {
	int T, N, M, i, j;
	long long ans;
	cin >> T;

	for (i = 0; i < T; i++) {
		cin >> N >> M;
		ans = 1;

		if (N > (M / 2))
			N = M - N;

		for (j = M; j > M - N; j--)
			ans *= j;

		for (j = N; j > 0; j--)
			ans /= j;

		cout << ans << endl;
	}

	return 0;
}