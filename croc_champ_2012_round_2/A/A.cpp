/*Iteration 1:
 * Find the respective row and col that contain a single star.
 * This is your fourth point.
 * 
 * Iteration 2:
 * I'd like to solve this using complex numbers.
 */
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int m, n, count;
	cin >> m >> n;
	vector<vector<char>> g(m, vector<char>(n));
	for(int i = 0; i < m; i++) {
		count = 0;
		for(int j = 0; j < n; j++) {
			cin >> g[i][j];
			if(g[i][j] == '*')
				count++;
		}
		if(count == 1){
			cout << i + 1 << " ";
		}
	}
	for(int j = 0; j < n; j++) {
		count = 0;
		for(int i = 0; i < m; i++) {
			if(g[i][j] == '*')
				count++;
		}
		if(count == 1){
			cout << j + 1 << "\n";
			break;
		}
	}
	return 0;
}
