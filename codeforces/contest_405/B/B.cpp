/*
Iteration 1:
For each unique i, j, k use their adjacent list/set to check
if transitivity is maintained. But this is too slow (TLE in online judge),
since this is O(n^3) approx (I think).

Iteration 2:
After going through the hint, I understand that we must
check if each connected component is a clique. To check if
its a clique, you just need to check if number of edges = (vertices * (vertices -1)) / 2,
(nC2 - number of edges possible between n nodes), where vertices is the number of vertices
inside the connected component.
*/

#include <bits/stdc++.h>
using namespace std;

bool clique(int source, vector<vector<int>>& adj_list, vector<bool>& visited) {
    cout << "Connected component\n";
    int vertex_count = 0, edge_count = 0;
    queue<int> q;
    q.push(source);
    while(!q.empty()) {
        int popped = q.front();
        q.pop();
        for(int neighbour : adj_list[popped]) {
            if(!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
                vertex_count++;
                edge_count++;
            }
        }
    }
    cout << "Vertex count: " << vertex_count << "\n";
    cout << "Edge count: " << edge_count  << "\n";
    if(edge_count == (vertex_count * (vertex_count - 1)) / 2)
        return true;
    return false;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, e, flag = 0;
    cin >> n >> e;
    vector<vector<int>> adj_list(n);
    int a, b;
    while(e--) {
        cin >> a >> b;
        adj_list[a-1].push_back(b-1);
        adj_list[b-1].push_back(a-1);
    }

    int vertice_count, edge_count;
    vector<bool> visited(n, false);
    for(int i = 0; i < n; i++) {
        if(!clique(i, adj_list, visited)){
            flag = 1;
            break;
        }
    }
    if(flag)
        cout << "NO\n";
    else
        cout << "YES\n";
    return 0;
}