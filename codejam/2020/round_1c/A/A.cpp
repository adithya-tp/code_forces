/*
 * As soon as distance to Pepurr becomes less than or equal to time, 
 * print out time. If this condition never happens, print "IMPOSSIBLE".
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    int x, y, flag, d_o, time, ans;
    string path;
    cin >> t;
    for(int j = 0; j < t; j++) {
        cin >> x >> y;
        cin >> path;
        d_o = abs(x) + abs(y);
        time = 0;
        flag = 0;
        for(int i = 0; i < int(path.length()); i++) {
			if(path[i] == 'N') {
				y++;
			}
			else if(path[i] == 'E') {
				x++;
			}
			else if(path[i] == 'S') {
				y--;
			}
			else if(path[i] == 'W'){
				x--;
			}
			d_o = abs(x) + abs(y);
			time++;
			if(d_o <= time) {
				flag = 1;
				ans = time;
				break;
			}
		}
		cout << "Case #" << j + 1 << ": ";
		if(flag)
			cout << ans << "\n";
		else
			cout << "IMPOSSIBLE\n";
    }
    return 0;
}
