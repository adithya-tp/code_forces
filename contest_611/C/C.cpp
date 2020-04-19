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
    int n, receiver, sender;
	cin >> n;
	vector<int> v(n, 0);
	vector<int> sending, giving;
	set<int> giving_set;
	for(int i = 0; i < n; i++)
		giving_set.insert(i+1);
	for(int i = 0; i < n; i++) {
		cin >> v[i];
		if(v[i] == 0) {
			sending.push_back(i+1);
		}
		else {
			giving_set.erase(v[i]);
		}
	}
	
	for(int i : giving_set)
		giving.push_back(i);
	
	for(long long i = 0; giving_set.size() != 0; i++) {
		receiver = giving[(i+1) % sending.size()];
		sender = sending[i % sending.size()];
		while(sender == receiver) {
			i++;
		}
		receiver = giving[(i+1) % sending.size()];
		v[sender - 1] = receiver;
		giving_set.erase(receiver);
	}
	for(int i : v)
		cout << i << " ";
	cout << "\n";
    return 0;
}
