/*
Iteration 1:
Simply color the top left corner as W, and the rest black to satisfy 
B = W + 1, where B is the number of black squares whose adjancent square are white,
and W is the inverse of B.

Therefore irrespective of the size (for the ranges of m, n in question), we always have B = 2, and W = 1.
*/
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t, m, n;
    cin >> t;
    while(t--) {
        cin >> m >> n;
        vector<vector<char>> out(m, vector<char>(n, 'B'));
        out[0][0] = 'W';
        for(vector<char> r : out) {
            for(char c : r) {
                cout << c;
            }
            cout << "\n";
        }
    }
    return 0;
}