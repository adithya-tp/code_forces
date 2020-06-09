/*
 * Iteration 1: 
 * If nuimber is odd the number of solutions is floor(n / 2)
 * If the number is even, then its n / 2 - 1
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t,n;
    cin >> t;
    while(t--) {
        cin >> n;
        if(n % 2 == 0) 
			cout << n / 2 - 1 << "\n";
		else
			cout << n / 2 << "\n";
    }
    return 0;
}
