#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, rp, width, xs, ys, rs;
    cin >> rp >> width;
    cin >> t;
    int count = 0;
    while(t--) {
		cin >> xs >> ys >> rs;
		double d = sqrt(pow(xs, 2) + pow(ys, 2));
		if(d + rs <= rp && d - rs >= rp - width)
			count++;
    }
    cout << count << "\n";
    return 0;
}
