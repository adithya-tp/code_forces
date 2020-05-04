#include <bits/stdc++.h>
using namespace std;
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, len, sum = 0;
    cin >> t;
    vector<int> l;
    while(t--) {
		cin >> len;
		l.push_back(len);
		sum += len;
    }
    sort(l.begin(), l.end(), greater<>());
	cout << (l[0] - (sum - l[0])) + 1 << "\n";
    return 0;
}
