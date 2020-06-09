#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n, m, grains, days = 1;
    cin >> n >> m;
    grains = n;
    while(grains > 0) {
        grains = min(n, grains + m) - days;
        days++;
    }
    cout << days - 1 << "\n";
    return 0;
}
