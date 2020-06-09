/*
 * Iteration 1: A monstrosity that I pulled outta my ass.
 * 
 * Iteration 2: 
 * If n - 2 is divisible by 3, print 1, 2, n - 3
 * Else print 1, 1, n - 2;				
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    vector<int> nums;
    cin >> n;
    if((n - 2) % 3 == 0)
		cout << "1 2 " << n - 3 << "\n";
	else
		cout << "1 1 " << n - 2 << "\n";
    return 0;
}
