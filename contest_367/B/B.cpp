#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q, coins;
    cin >> n;
	vector<int> cost(n);
	for(int i = 0; i < n; i++) {
		cin >> cost[i];
	}
	cin >> q;
	sort(cost.begin(), cost.end());
	while(q--) {
		cin >> coins;
		auto res = upper_bound(cost.begin(), cost.end(), coins);
		cout << res - cost.begin() << "\n";
	}
    return 0;
}
