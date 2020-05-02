#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, temp, trace, count_rows, count_cols;
    cin >> t;
    for(int c = 0; c < t; c++) {
        trace = 0, count_rows = 0, count_cols = 0;
        cin >> n;
        vector<vector<int>> a(n);
        for(int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
            {
                cin >> temp;  
                a[i].push_back(temp);
                if(i == j)
                    trace += a[i][j];
            }
        }

        for(int i = 0; i < n; i++) {
            unordered_map<int, bool> count_map;
            for(int j = 0; j < n; j++) {
                if(count_map.find(a[i][j]) == count_map.end())
                    count_map[a[i][j]] = true;
                else{
                    count_rows += 1;
                    break;
                }
            }
        }

        for(int i = 0; i < n; i++) {
            unordered_map<int, bool> count_map;
            for(int j = 0; j < n; j++) {
                if(count_map.find(a[j][i]) == count_map.end())
                    count_map[a[j][i]] = true;
                else{
                    count_cols += 1;
                    break;
                }
            }
        }
        cout << "Case #" << c + 1 << ": " << trace << " " << count_rows << " " << count_cols << "\n";
    }
    return 0;
}