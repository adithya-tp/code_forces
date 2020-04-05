#include <bits/stdc++.h>
using namespace std;

bool compByStartTime(tuple<int, int, int>& i1, tuple<int, int, int>& i2) {
    return get<1>(i1) < get<1>(i2);
}

void print_res(vector<char>& r) {
    for(char c : r) {
        cout << c;
    }
    cout << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, num_intervals, curr_index, prev_index, first_c_index, count, flag;
    cin >> t;
    for(int i = 0; i < t; i++) {
        cin >> num_intervals;
        first_c_index = INT_MAX;
        count = num_intervals;
        flag = 0;
        vector<tuple<int, int, int>> intervals(num_intervals);
        vector<char> res(num_intervals, 'e');
        for(int j = 0; j < num_intervals; j++) {
            get<0>(intervals[j]) = j;
            cin >> get<1>(intervals[j]) >> get<2>(intervals[j]);
        }

        sort(intervals.begin(), intervals.end(), compByStartTime);
        res[get<0>(intervals[0])] = 'J';
        prev_index = 0;
        for(int j = 1; j < num_intervals; j++) {
            curr_index = get<0>(intervals[j]);
            if(get<1>(intervals[j]) >= get<2>(intervals[prev_index]) && res[curr_index] == 'e') {
                count--;
                res[curr_index] = 'J';
                prev_index = j;
            }
        }
        for(int i = 0; i < res.size(); i++) {
            if(res[get<0>(intervals[i])] == 'e') {
                res[get<0>(intervals[i])] = 'C';
                prev_index = i;
                break;
            }
        }
        for(int j = prev_index + 1; j < num_intervals; j++) {
            curr_index = get<0>(intervals[j]);
            if(get<1>(intervals[j]) >= get<2>(intervals[prev_index]) && res[curr_index] == 'e') {
                res[curr_index] = 'C';
                prev_index = j;
            }
        }
        cout << "Case #" << i + 1 << ": ";
        for(char c : res) {
            if(c == 'e'){
                flag = 1;
            }
        }
        if(flag)
            cout << "IMPOSSIBLE\n";
        else
            print_res(res);
    }
    return 0;
}
