#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, res;
    cin >> n >> k;
    vector<int> nums(n);
    for(int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    res = k == 0 ? nums[0] - 1 : nums[k - 1];
	int cnt = 0;
	for(int i = 0; i < n; i++)
		if(nums[i] <= res)
			cnt++;
	if(cnt != k || res < 1)
		cout << "-1\n";
	else
		cout << res << "\n";
    return 0;
}
