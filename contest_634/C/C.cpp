/*
 * Iteration 1 (Dont know if my implementation of this idea is wrong, or just
 * the idea itself is fundamentally wrong)
 * Maintain two maps to keep track of characters with single and multiple frequencies.
 * Find the minimum between max value found in multiple, and the total size of single.
 * Answer is either the above found min value, or the 1 + min_value, if difference
 * between multiple and single is greater than 1. I think this idea is wrong. 
 * 
 * Iteration 2
 * Came across a solution similar to mine. However, they only used a single map.
 * But still kept track of the max value in the map though. If the total_size of map
 * was equal to max value, then answer = total_size - 1, else minimum between 
 * total_size and max value is the answer. Still need to convice myself why this works.
 */ 
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, num, n, ans, max_multiple = INT_MIN;
    cin >> t;
    while(t--) {
		unordered_map<int, int> count;
		max_multiple = INT_MIN;
		cin >> num;
        for(int i = 0; i < num; i++) {
			cin >> n;
			count[n]++;
			max_multiple = max(max_multiple, count[n]);
		}
		ans = count.size();
		if(ans == max_multiple)
			cout << ans - 1 << "\n";
		else
			cout << min(ans, max_multiple) << "\n";
    }
    return 0;
}
