#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, mins, hrs, total;
    cin >> t;
    while(t--) {
		total = 0;
        cin >> hrs >> mins;
        total += (60 - mins);
        hrs++;
        cout << total + 60 * (24 - hrs) << "\n";
    }
    return 0;
}
