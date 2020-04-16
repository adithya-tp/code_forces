#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x, y, pos_x = 0, neg_x = 0;
    cin >> t;
    while(t--) {
        cin >> x >> y;
        if(x < 0)
			neg_x++;
		else
			pos_x++;
    }
    if(neg_x < 2 || pos_x < 2)
		cout << "Yes\n";
	else
		cout << "No\n";
    return 0;
}
