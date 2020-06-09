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
 * total_size and max value is the answer.
 * 
 * I understand how this works now.
 * 
 * You keep track of the counts of all elements in a map. The number of unique 
 * elements (count.size()). Now we iterate through all the elements in the map. 
 * If count.size() > count[element], then ans = max(count[element], ans). 
 * If count[element] < count.size(), then ans = max(count.size(), ans).
 * In each of the above cases, we choose the min of the two quantities considered in the
 * equality, since we are constrained to have equal number of elements in a team.
 * Now if count[element] == count.size(), then ans = count.size() - 1 = count[element] - 1.
 * (best understood by trying out an example like {1, 2, 3, 3, 3})
 */ 
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, num, ans, n;
    cin >> t;
    while(t--) {
		unordered_map<int, int> count;
		cin >> num;
        for(int i = 0; i < num; i++) {
			cin >> n;
			count[n]++;
		}
		ans = INT_MIN;
		auto it = count.begin();
		int l = count.size();
		while(it != count.end()) {
			if(l == it->second)
				ans = max(ans, l - 1);
			else
				ans = max(ans, min(l, it->second));
			it++;
		}
		cout << ans << "\n";
    }
    return 0;
}
