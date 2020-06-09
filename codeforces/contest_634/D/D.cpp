/* Iteration 1:
 * Change all occurences of 2 to 1. Need to convince myself how this works.
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, x;
    cin >> t;
    while(t--) {
        vector<vector<int>> sudoku(9, vector<int>(9));
        for(int i = 0; i < 9; i++) {
			cin >> x;
			for(int j = 8; j >=0; j--) {
				sudoku[i][j] = x % 10;
				if(sudoku[i][j] == 2)
					sudoku[i][j] = 1;
				x /= 10;
			}
			for(int j : sudoku[i])
				cout << j;
			cout << "\n"; 
		}
    }
    return 0;
}
