#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k, total;
    cin >> t;
    while(t--) {
		total = 0;
		cin >> n >> k;
		total += (n / k) * k;
		cout << total + min(n % k, k / 2) << "\n";
    }
    return 0;
}
