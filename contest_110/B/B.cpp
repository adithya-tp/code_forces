#include <bits/stdc++.h>
using namespace std;
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, r;
    double res = 0;
    cin >> t;
    vector<int> rad;
    while(t--) {
		cin >> r;
        rad.push_back(r);
    }
    sort(rad.begin(), rad.end());
    for(int i = rad.size() - 1; i > 0; i -=2) {
		res += (pow(rad[i], 2) - pow(rad[i-1], 2));
	}
	cout << setprecision(10);
	if(rad.size() % 2 == 0)
		cout << res * M_PI << "\n";
	else
		cout << (pow(rad[0], 2) + res) * M_PI << "\n";
    return 0;
}
