#include <bits/stdc++.h>
using namespace std;
int flag;
void add_edge(vector<vector<int>>& g, int a, int b) {
	g[a].push_back(b);
	g[b].push_back(a);
}

void dfs(vector<vector<int>>& g, vector<bool>& vis, int source) {
	vis[source] = true;
	if(g[source].size() != 2)
		flag = 1;
	for(int neighbour : g[source]) {
		if(!vis[neighbour])
			dfs(g, vis, neighbour);
	}
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int v, e, v1, v2;
    cin >> v >> e;
    vector<vector<int>> g(v + 1);
    while(e--) {
		cin >> v1 >> v2;
		add_edge(g, v1, v2);
	}
	vector<bool> vis(v + 1);
	int count = 0;
	for(int i = 1; i <= v; i++) {
		flag = 0;
		if(!vis[i]) {
			dfs(g, vis, i);
			if(!flag) {
				count++;
			}
		}
	}
	cout << count << "\n";
    return 0;
}
