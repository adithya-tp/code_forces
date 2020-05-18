#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
		cin >> nums[i];
	}
	
	map<int, int> dp;
	int curr_num, res = 0, last_num = 0;
	for(int i = 0; i < n; i++) {
		curr_num = nums[i];
		dp[curr_num] = dp[curr_num - 1] + 1;
		if(dp[curr_num] > res) {
			res = dp[curr_num];
			last_num = curr_num;
		}
	}
	// At the end of the above loop, we have the last number of our longest consecutive subseq,
	// and we have the length of the same (we only computed it because the question required it).
	
	vector<int> out;
	for(int i = n - 1; i >= 0; i--) {
		if(nums[i] == last_num) {
			out.push_back(i + 1);
			last_num--;
		}
	}
	reverse(out.begin(), out.end());
	cout << res << "\n";
	for(int i : out)
		cout << i << " ";
	cout << "\n";
    return 0;
}
