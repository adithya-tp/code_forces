#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, t;
    cin >> t;
    while(t--) {
		cin >> n;
		n = n / 2;
		cout << (n * (n + 1) * (2 * n + 1)) * 8 / 6 << "\n";
    }
    return 0;
}
