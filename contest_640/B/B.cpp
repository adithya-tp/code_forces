#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k, odd_rem, even_rem;
    cin >> t;
    while(t--) {
		cin >> n >> k;
		odd_rem = n - (k - 1);
		even_rem = n - (2 * (k - 1));
		if(odd_rem % 2 == 1 && odd_rem > 0) {
			cout << "YES\n";
			for(int i = 0; i < k - 1; i++) {
				cout << "1 ";
			}
			cout << n - (k - 1) << "\n";
		}
		else if (even_rem % 2 == 0 && even_rem > 0) {
			cout << "YES\n";
			for(int i = 0; i < k - 1; i++) {
				cout << "2 ";
			}
			cout << n - (2 * (k - 1)) << "\n";
		}
		else {
			cout << "NO\n";
		}
    }
    return 0;
}
