#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while(t--) {
		cin >> n;
		for(int k = 2; ;k++) {
			if(n % int(pow(2, k) - 1) == 0) {
				cout << int(n / (pow(2, k) - 1)) << "\n";
				break;
			}
		}
    }
    return 0;
}
