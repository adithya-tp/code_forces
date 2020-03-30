/*
Iteration 1:
find the difference between the latest starting code class 
and the earliest finishing chess class, and vice versa.
(Max with 0, incase both  differences turn out to be negative).
The answer is the max(0, max(above computed differences)).
Complexity of O(nlogn) coz i used sorting.

Iteration 2:
Looks like this can be done in O(m + n). You don't really
need to sort. Just keep track of maxL_start and minR_finish.
*/

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n;
    vector<pair<int, int>> chess(n);
    for(int i = 0; i < n; i++) {
        cin >> chess[i].first >> chess[i].second;
    }
    cin >> m;
    vector<pair<int, int>> coding(m);
    for(int i = 0; i < m; i++) {
        cin >> coding[i].first >> coding[i].second;
    }
    int min_fin_coding = INT_MAX, max_start_coding = -INT_MAX;
    int min_fin_chess = INT_MAX, max_start_chess = -INT_MAX;

    for(int i = 0; i < n; i++) {
        max_start_chess = max(max_start_chess, chess[i].first);
        min_fin_chess = min(min_fin_chess, chess[i].second);
    }

    for(int i = 0; i < m; i++) {
        max_start_coding = max(max_start_coding, coding[i].first);
        min_fin_coding = min(min_fin_coding, coding[i].second);
    }

    cout << max(0, max(max_start_chess - min_fin_coding, max_start_coding - min_fin_chess)) << "\n";
    
    return 0;
}