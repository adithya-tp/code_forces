#include <bits/stdc++.h>
using namespace std;

bool check_special(int num, vector<int>& v) {
	int p1 = 0, p2 = 0, sum = 0, l = v.size();
	while(true) {
		while(p2 < l && sum < num){
			// you HAVE TO RESET THE SUMMMMMMM
			if(p2 < l && v[p2] == num) {
				p2++;
				p1 = p2;
				sum = 0;
			}
			else {
				if(p2 < l) {
					sum += v[p2];
					p2++;
				}
			}
		}
		while(sum > num) {
			if(v[p1] == num) {
				p1++;
				p2 = p1;
				sum = 0;
			}
			else {
				sum -= v[p1];
				p1++;
			}
		}
		if(sum == num) { 
			return true;
		}
		if(p2 == l)
			break;
	}
	return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, count, n;
    cin >> t;
    while(t--) {
		count = 0;
		cin >> n;
		vector<int> v(n);
		set<int> special;
		set<int> not_special;
		for(int i = 0; i < n; i++) 
			cin >> v[i];
		for(int i = 0; i < n; i++) {
			if(special.find(v[i]) != special.end()) {
				count++;
			}
			else if(not_special.find(v[i]) != not_special.end())
				continue;
			else{
				if(check_special(v[i], v)) {
					special.insert(v[i]);
					count++;
				}
				else {
					not_special.insert(v[i]);
				}
			}
		}
		cout << count << "\n";
    }
    return 0;
}
