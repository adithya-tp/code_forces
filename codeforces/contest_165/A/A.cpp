#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    double a, n;
    cin >> t;
    while(t--) {
        cin >> a;
        n = 360.0 / (180.0 - a);
        if(n == floor(n))
            cout << "YES\n";
        else
            cout << "NO\n";
    }
    return 0;
}
