#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, k;
    cin >> t;
    while(t--) {
		cin >> n >> k;
		int kth_number_after_this_multiple = k / (n - 1);
		if(k % (n - 1) == 0)
			cout << n * kth_number_after_this_multiple - 1 << "\n";
		else
			cout << n * kth_number_after_this_multiple + (k % (n - 1)) << "\n";
    }
    return 0;
}
