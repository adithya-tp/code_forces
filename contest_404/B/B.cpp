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
struct Interval {
    int s, f;
    Interval(int s, int f) {
        this->s = s;
        this->f = f;
    }
};

bool finish_ascending(const Interval& class1, const Interval& class2) {
    return class1.f < class2.f;
}

bool start_descending(const Interval& class1, const Interval& class2) {
    return class1.s > class2.s;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m, s, f, ans;
    vector<Interval> chess;
    vector<Interval> coding;
    cin >> n;
    while(n--) {
        cin >> s >> f;
        chess.push_back(Interval(s, f));
    }
    cin >> m;
    while(m--) {
        cin >> s >> f;
        coding.push_back(Interval(s, f));
    }

    sort(chess.begin(), chess.end(), finish_ascending);
    sort(coding.begin(), coding.end(), start_descending);
    ans = coding[0].s - chess[0].f;
    
    sort(coding.begin(), coding.end(), finish_ascending);
    sort(chess.begin(), chess.end(), start_descending);
    cout << max(0, max(ans, chess[0].s - coding[0].f)) << "\n";
    
    return 0;
}