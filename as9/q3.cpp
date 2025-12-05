#include <iostream>
#include <vector>
#include <queue>
using namespace std;
class Graph {
    int V;
    vector<vector<int>> adj;
public:
    Graph(int V) : V(V), adj(V) {}
    void addEdge(int u, int v, bool directed = false) {
        adj[u].push_back(v);
        if (!directed) adj[v].push_back(u);
    }
    void dfsHelper(int u, vector<bool> &vis) {
        cout << u << " ";
        vis[u] = true;
        for (int i = adj[u].size() - 1; i >= 0; i--) {  
            int v = adj[u][i];
            if (!vis[v]) dfsHelper(v, vis);
        }
    }
    void dfs(int src = 0) {
        vector<bool> vis(V, false);
        dfsHelper(src, vis);
    }
    void BFS(int start) {
        vector<bool> visited(V, false);
        queue<int> q;
        visited[start] = true;
        q.push(start);
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (int v : adj[node]) { 
                if (!visited[v]) {
                    visited[v] = true;
                    q.push(v);
                }
            }
        }
    }
};
int main() {
    Graph g(6);
    g.addEdge(0, 1);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(2, 4);
    cout << "DFS: ";
    g.dfs(0);  
    cout << endl;
    cout << "BFS: ";
    g.BFS(0);    
    cout << endl;
    return 0;
}
