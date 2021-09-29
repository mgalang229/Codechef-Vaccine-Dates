#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int d, l, r;
		cin >> d >> l >> r;
		// check if 'd' is within the range of [l, r] (inclusive)
		if (d >= l && d <= r) {
			cout << "Take second dose now";
		} else if (d < l) {
			cout << "Too Early";
		} else {
			cout << "Too Late";
		}
		cout << '\n';
	}
	return 0;
}
