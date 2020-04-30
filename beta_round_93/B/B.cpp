/* Iteration 1:
 * Maintain a hash map of counts.
 * For each count, increment number of frames by "count / 4";
 * If count is less than 4 (but not equal to 1), then add the frames to your bag.
 * If your bag ever flows greater than 4, it is guaranteed that your bag contains
 * only enough sticks for a single frame, so increment frame by 1 and empty your bag.
 */
 
#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, frame_len, bag = 0, frames = 0;
	cin >> n;
	unordered_map<int, int> count_map;
	for(int i = 0; i < n; i++) {
		cin >> frame_len;
		count_map[frame_len]++;
	}
	bag = 0;
	for(auto i : count_map) {
		frames += i.second / 4;
		if(i.second % 4 != 1)
			bag += i.second % 4;
		if(bag >= 4) {
			frames++;
			bag = 0;
		}
	}
	cout << frames << "\n";

    return 0;
}
