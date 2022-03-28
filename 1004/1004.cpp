#include <iostream>
using namespace std;

int main(void) {
	int  T, n, x1, x2, y1, y2, cx, cy, r, i, j, ans;
	double d1, d2;
	int st[50], de[50];
	cin >> T;

	for (i = 0; i < T; i++) {
		ans = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		cin >> n;
		for (j = 0; j < n; j++) {
			cin >> cx >> cy >> r;
			d1 = (x1 - cx) * (x1 - cx) + (y1 - cy) * (y1 - cy);
			d2 = (x2 - cx) * (x2 - cx) + (y2 - cy) * (y2 - cy);

			if (d1 < r * r)
				st[j] = 1;
			else
				st[j] = 0;

			if (d2 < r * r)
				de[j] = 1;
			else
				de[j] = 0;
		}

		for (j = 0; j < n; j++) {
			if (st[j] == 1 && de[j] == 0)
				ans++;
			else if (st[j] == 0 && de[j] == 1)
				ans++;
		}
		cout << ans << endl;
	}
	return 0;
}