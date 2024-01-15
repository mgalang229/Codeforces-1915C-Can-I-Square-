#include <bits/stdc++.h>
using namespace std;

void solve() {
	int n;
	cin >> n;
	long long sum = 0;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		sum += x;
	}
	if (sum == 1) {
		cout << "YES\n";
		return;
	}
	long long low = 1, high = sum;
	bool ok = false;
	while (low <= high) {
		long long mid = low + (high - low) / 2;
		if (mid > sqrtl(sum)) {
			high = mid - 1;
			continue;
		}
		long long square = mid * mid;
		if (square == sum) {
			ok = true;
			break;
		} else if (square < sum) {
			low = mid + 1;
		} else {
			high = mid - 1;
		}
	}
	cout << (ok ? "YES" : "NO") << "\n";
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	int t = 1;
	cin >> t;
	while (t--)
		solve();
}
