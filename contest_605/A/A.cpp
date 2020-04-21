#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin >> t;
    int a, b, c;
    while(cin >> a >> b >> c){
        vector<int> fr(3,0);
        fr[0] = a; fr[1] = b; fr[2] = c;
        int abs_dist = INT_MAX;
        for(int i = fr[0] - 1; i <= fr[0] + 1; i++){
            for(int j = fr[1] - 1; j <= fr[1] + 1; j++){
                for(int k = fr[2] - 1; k <= fr[2] + 1; k++){
                    abs_dist = min(abs_dist, abs(i-j) + abs(j - k) + abs(k - i));
                }
            }
        }
        cout << abs_dist << "\n";
    }
    return 0;
}
