#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin >> t;
	while (t--) {
		long long s, n;
		cin >> s >> n;
		long long sum = 0;
		sum += (s / n);
		s %= n;
		if (s % 2 == 1) {
			s--;
			sum++;
		}
		if (s > 0) {
			sum++;
		}
		cout << sum << '\n';
	}
	return 0;
}
