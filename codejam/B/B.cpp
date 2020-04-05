#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, depth, dig;
    string num, ans;
    cin >> t;
    for(int i = 0; i < t; i++) {
        depth = 0;
        ans = "";
        cin >> num;
        for(int j = 0; j < num.length(); j++) {
            dig = num[j] - 48;
            if(depth - dig < 0) {
                for(int k = 0; k < abs(depth - dig); k++) {
                    ans.append("(");
                }
                ans.append(to_string(dig));
            }
            else if(depth - dig > 0) {
                for(int k = 0; k < abs(depth - dig); k++) {
                    ans.append(")");
                }
                ans.append(to_string(dig));
            }
            else {
                ans.append(to_string(dig));
            }
            depth = dig;
        }
        depth = 0;
        for(int k = 0; k < abs(depth - dig); k++) {
            ans.append(")");
        }
        cout << "Case #" << i + 1 << ": ";
        cout << ans << "\n";
    }
    return 0;
}