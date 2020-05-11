#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n, left, right, a, b, moves, to_beat, curr_sum, chance;
    cin >> t;
    while(t--) {
		to_beat = 0, curr_sum = 0, moves = 0, a = 0, b = 0, chance = 0;
        cin >> n;
        left = 0, right = n - 1;
        vector<int> candies(n);
        for(int i = 0; i < n; i++) {
			cin >> candies[i];
		}
		while(left <= right) {
			moves++;
			chance ^= 1;
			curr_sum = 0;
			if(chance) {
				while(curr_sum <= to_beat && left <= right) {
					curr_sum += candies[left];
					a += candies[left];
					left++;
				}
			}
			else {
				while(curr_sum <= to_beat && left <= right) {
					curr_sum += candies[right];
					b += candies[right];
					right--;
				}
			}
			to_beat = curr_sum;
		}
		cout << moves << " " << a << " " << b << "\n";
    }
    return 0;
}
