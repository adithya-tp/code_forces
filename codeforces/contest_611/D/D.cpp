#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, p, temp;
    cin >> t >> p;
    unordered_map<int, bool> trees;
    for(int i = 0; i < t; i++) {
		cin >> temp;
		trees[temp] = true;
	}
	
	for(auto k : trees)
		cout << k.first << " " << k.second << "\n";
	cout << endl;
	
    return 0;
}
