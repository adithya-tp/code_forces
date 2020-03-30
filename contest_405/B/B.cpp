/*
Iteration 1:
for each unique i, j, k use their adjacent list/set to check
if transitivity is maintained. But this is too slow (TLE in online judge),
since this is O(n^3) approx (I think).
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, e, flag = 0;
    cin >> n >> e;
    vector<set<int>> adj_list(n);
    int a, b;
    while(e--) {
        cin >> a >> b;
        adj_list[a-1].insert(b-1);
        adj_list[b-1].insert(a-1);
    }

    for(int i = 0; i < n; i++) {
        for(int j : adj_list[i]){
            for(int k : adj_list[j]) {
                if(adj_list[k].find(i) == adj_list[k].end() && !(i==k)) {
                    flag = 1;
                    cout << "NO\n";
                    break;
                }
            }
            if(flag)
                break;
        }
        if(flag)
            break;
    }
    if(!flag)
        cout << "YES\n";
    return 0;
}