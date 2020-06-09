#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    vector<long long int> nums(t, -1);
    vector<int> in(t, -1);
    vector<int> out(t, -1);
    for(int i = 0; i < t; i++) {
		cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    for(int i = 0; i < t; i++) {
		for(int j = i + 1; j < t; j++) {
			if(nums[i] * 2 == nums[j]) {
				out[i] = j;
				in[j] = i;
			}
			else if(nums[i] * 3 == nums[j]) {
				in[i] = j;
				out[j] = i;
			}
		}
	}
	int curr_idx;
	for(int i = 0; i < t; i++) {
		if(in[i] == -1) {
			curr_idx = i;
			break;
		}
	}
	while(out[curr_idx] != -1) {
		cout << nums[curr_idx] << " ";
		curr_idx = out[curr_idx];
	}
	cout << nums[curr_idx] << " ";
	cout << "\n";
    return 0;
}
