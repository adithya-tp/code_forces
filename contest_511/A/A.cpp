/*
 * Iteration 1: A monstrosity that I pulled outta my ass.
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, out;
    vector<int> nums;
    cin >> n;
    for(int i = 3; i > 1; i--) {
		out = n / i;
		n -= out;
		if(out % 3 == 0) {
			out--; n++;
		}
		nums.push_back(out);
	}
	if(n % 3 == 0) {
		nums[1] = nums[1] - 1;
		nums.push_back(n+1);
	}
	else
		nums.push_back(n);
	for(int i : nums)
		cout << i << " ";
	cout << "\n";
    return 0;
}
