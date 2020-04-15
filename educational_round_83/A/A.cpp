#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, m, n;
    cin >> t;
    while(t--) {
        cin >> m >> n;
        if(m % n == 0)
			cout << "YES\n";
		else
			cout << "NO\n";
    }
    return 0;
}
