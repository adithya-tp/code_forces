/*
 * At each step for triangle length inequality check, add equality check for segment as well
 */

#include <bits/stdc++.h>
using namespace std;
string answer() {
	vector<int> arr(4);
	int segment = 0; 
	for(int i = 0; i < 4; i++) {
		cin >> arr[i];
	}
	int l = arr.size();
	for(int i = 0; i < l - 2; i++) {
		for(int j = i + 1; j < l - 1; j++){
			for(int k = j + 1; k < l; k++) {
				if(arr[i] + arr[j] > arr[k]) {
					if(arr[j] + arr[k] > arr[i]) {
						if(arr[k] + arr[i] > arr[j]) {
							return "TRIANGLE";
						}
						else if(arr[k] + arr[i] == arr[j]) {
							segment = 1;
						}
					}
					else if(arr[j] + arr[k] == arr[i]) {
						segment = 1;
					}
				}
				else if(arr[i] + arr[j] == arr[k]) {
					segment = 1;
				}
			}	
		}
	}
	if(segment)
		return "SEGMENT";
	return "IMPOSSIBLE";
}
				
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string ans = answer();
    cout << ans << "\n";
    return 0;
}
