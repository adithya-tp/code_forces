/* Iteration 2:
 * We must first find all the isolated vertices, and chain all of them 
 * together. If we don't do this, and include the isolated vertices, along 
 * with the ones that either have a missing incoming / outgoing edge in "in"
 * and "out" vectors, and try to assign missing values in the input vector, 
 * the code would be too slow (got a TLE on the 9th test case - this is what i 
 * did in iteration 1). 
 * 
 * Once the isolated vertices have been dealt with, we can simply do v[in[i]] = out[i]
 * since both "in" and "out" now have the same cardinality.
 */

#include <bits/stdc++.h>
using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
	cin >> n;
	vector<int> v(n, 0);
	vector<int> in(n, 0), out(n, 0);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		v[i]--;
		if(v[i] != -1) {
			in[v[i]]++;
			out[i]++;
		}
	}
	
	vector<int> isolated;
	for(int i = 0; i < n; i++) {
		if(!(in[i] || out[i]))
			isolated.push_back(i);
	}
	if(isolated.size() == 1) {
		for(int i = 0; i < n; i++) {
			if(in[i] == 0 && out[i] != 0) {
				in[i]++;
				v[isolated[0]] = i;
				out[isolated[0]]++;
				break;
			}
		}
	}
	else if (isolated.size() > 1) {
		for(int i = 0; i < int(isolated.size()); i++) {
			int curr = isolated[i];
			int next = isolated[(i+1) % isolated.size()];
			v[curr] = next;
			out[curr]++;
			in[next]++;
		}
	}

	// Now that we've dealt with the isolated vertices, we can now go ahead with
	// vertices that have either a single outgoing or a single incoming edge.
	vector<int> in_numbers, out_numbers;
	for(int i = 0; i < n; i++) {
		if(in[i] == 0)
			in_numbers.push_back(i);
		else if(out[i] == 0)
			out_numbers.push_back(i);
	}
	
	for(int i = 0; i < int(in_numbers.size()); i++) {
		v[out_numbers[i]] = in_numbers[i];
	}
	
	for(int i : v)
		cout << i + 1 << " ";
	cout << "\n";
	return 0;

}
