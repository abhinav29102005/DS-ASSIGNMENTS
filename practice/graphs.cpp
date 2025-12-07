// #include<bits/stdc++.h>
// using namespace std;
// class graph{
//   public:
//   vector<list<int>> adj;
//   graph(int n){
//     adj.resize(n);
//   }
//   void addedge(int u,int v,bool dir){
//     //dir=0 is undir
//     //dir=1 is dir
//     adj[u].push_back(v);
//     if(dir==0) adj[v].push_back(u);
//   }
//   void showgraph(){
//     for(int i=0;i<adj.size();i++){
//       cout<<i<<"->";
//       for(int v:adj[i])cout<<v<<" ";
//       cout<<endl;
//     }
//   }
// };
// int main(){
//   graph g(5);
//   g.addedge(0,1,1);
//   g.addedge(1,2,1);
//   g.addedge(3,4,1);
//   g.showgraph();
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// class graph {
// public:
//     int n;
//     unordered_map<int, list<int>> adj;
//     graph(int n) : n(n) {}
//     void addedge(int u, int v, bool dir) {
//         adj[u].push_back(v);
//         if (dir == 0) adj[v].push_back(u);
//     }
//     void showgraph() {
//         for (int node = 0; node < n; ++node) {
//             cout << node << " -> ";
//             for (int nbr : adj[node]) {
//                 cout << nbr << ",";
//             }
//             cout << "\n";
//         }
//     }
// };
// int main() {
//     int n;
//     cout << "etr number of nodes: ";
//     cin >> n;
//     int m;
//     cout << "etr number of edges: ";
//     cin >> m;
//     graph g(n);
//     cout << "etr " << m << " edges (u v):\n";
//     for (int i = 0; i < m; i++) {
//         int u, v;
//         cin >> u >> v;
//         g.addedge(u, v, 0); 
//     }
//     g.showgraph();
//     return 0;
// }

// BFS

#include <bits/stdc++.h>
using namespace std;
class graph {
public:
    int n;
    vector<list<int>> adj;
    graph(int n) : n(n) {
        adj.resize(n);
    }
    void addedge(int u, int v, bool dir) {
        adj[u].push_back(v);
        if (dir == 0) adj[v].push_back(u);
    }
    void showgraph() {
        for (int node = 0; node < n; ++node) {
            cout << node << " -> ";
            for (int nbr : adj[node]) {
                cout << nbr << ",";
            }
            cout << "\n";
        }
    }
    void bfs(int src) {
        vector<bool> visited(n, false);
        queue<int> q;
        visited[src] = true;
        q.push(src);
        cout << "BFS from " << src << ": ";
        while (!q.empty()) {
            int node = q.front();
            q.pop();
            cout << node << " ";

            for (auto &nbr : adj[node]) {
                if (!visited[nbr]) {
                    visited[nbr] = true;
                    q.push(nbr);
                }
            }
        }
        cout << endl;
    }
      void dfsUtil(int node, vector<bool> &visited) {
        visited[node] = true;
        cout << node << " ";

        for (auto &nbr : adj[node]) {
            if (!visited[nbr]) {
                dfsUtil(nbr, visited);
            }
        }
    }

    void dfs(int src) {
        vector<bool> visited(n, false);
        cout << "DFS from " << src << ": ";
        dfsUtil(src, visited);
        cout << endl;
    }

};
int main() {
    int n;
    cout << "etr number of nodes: ";
    cin >> n;
    int m;
    cout << "etr number of edges: ";
    cin >> m;
    graph g(n);
    cout << "etr " << m << " edges (u v):\n";
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        g.addedge(u, v, 0);  
    }
    g.showgraph();
    int src;
    cout << "enter source for bfs: ";
    cin >> src;
    g.bfs(src);
    cout << "enter source for dfs: ";
    cin >> src;
    g.dfs(src);
    return 0;
}