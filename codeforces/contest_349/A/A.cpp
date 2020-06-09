#include <bits/stdc++.h>
using namespace std;
#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double d, h, v, e;
    cin >> d >> h >> v >> e;
    double ans = (M_PI * pow(d, 2) * h) / ( 4 * v - M_PI * pow(d, 2) * e); 
    if(ans < 0)
		cout << "NO\n";
	else {
		cout << "YES\n";
		cout << setprecision(10) << ans << "\n";
	}
    return 0;
}
