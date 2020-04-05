/*
Iteration 1: I'll enter through the queue at pos i at time t
where t satisfies `(i + t * n) > q_length_at_idx_i`.
I output the index of the queue which I visit first after it has gone to zero, 
which will be the queue that has the lowest value for t.
*/
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, q_length, t, idx, min_time = INT_MAX;
    cin >> n;
    vector<int> see_when_zero(n);
    for(int i = 0 ; i < n; i++) {
        cin >> q_length;
        t = 0;
        while((i+1) + (t * n) <= q_length) {
            t++;
        }
        if(t < min_time) {
            min_time = t;
            idx = i + 1;
        }
    }
    cout << idx << "\n";
    return 0;
}