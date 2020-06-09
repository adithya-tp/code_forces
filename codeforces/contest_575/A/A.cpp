#include<bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int q;
    long long temp, ans;
    cin >> q;
    for(int i = 0; i < q; i++){
        long long sum = 0;
        for(int i = 0; i < 3; i++){
            cin >> temp;
            sum += temp;
        }
        ans = floor(sum /2);
        cout << ans << "\n";
    }
    return 0;
}
