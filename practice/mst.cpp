#include <bits/stdc++.h>
using namespace std;
struct Edge { int u,v,w; };
int findp(vector<int>& p, int x){
    return p[x]==x?x:p[x]=findp(p,p[x]);
}
void kruskal(int V, vector<Edge> edges){
    sort(edges.begin(), edges.end(), [](const Edge &a, const Edge &b){ return a.w<b.w; });
    vector<int> parent(V), rnk(V,0);
    for(int i=0;i<V;i++) parent[i]=i;
    int taken=0, total=0;
    cout<<"Kruskal MST edges:\n";
    for(auto &e: edges){
        int a=findp(parent,e.u), b=findp(parent,e.v);
        if(a!=b){
            if(rnk[a]<rnk[b]) swap(a,b);
            parent[b]=a;
            if(rnk[a]==rnk[b]) rnk[a]++;
            cout<<e.u<<" - "<<e.v<<" : "<<e.w<<"\n";
            total += e.w;
            if(++taken==V-1) break;
        }
    }
    if(taken==V-1) cout<<"Kruskal Total weight: "<<total<<"\n";
    else cout<<"Kruskal MST not possible\n";
}

void prim(int V, const vector<vector<int>>& adj){
    const int INF = INT_MAX/4;
    vector<int> key(V, INF), parent(V, -1);
    vector<bool> used(V,false);
    key[0]=0;
    for(int i=0;i<V;i++){
        int u=-1;
        for(int v=0;v<V;v++) if(!used[v] && (u==-1 || key[v]<key[u])) u=v;
        if(u==-1 || key[u]==INF) break;
        used[u]=true;
        for(int v=0;v<V;v++){
            if(adj[u][v]!=INF && !used[v] && adj[u][v]<key[v]){
                key[v]=adj[u][v];
                parent[v]=u;
            }
        }
    }
    int total=0; int cnt=0;
    cout<<"Prim MST edges:\n";
    for(int v=1;v<V;v++){
        if(parent[v]==-1){ cout<<"Prim MST not possible\n"; return; }
        cout<<parent[v]<<" - "<<v<<" : "<<adj[v][parent[v]]<<"\n";
        total += adj[v][parent[v]];
        cnt++;
    }
    if(cnt==V-1) cout<<"Prim Total weight: "<<total<<"\n";
}
int main(){
    int V = 5;
    vector<Edge> edges = {
        {0,1,2},{0,3,6},{1,2,3},{1,3,8},{1,4,5},{2,4,7},{3,4,9}
    };
    const int INF = INT_MAX/4;
    vector<vector<int>> adj(V, vector<int>(V, INF));
    for(int i=0;i<V;i++) adj[i][i]=0;
    for(auto &e: edges){
        if(e.w < adj[e.u][e.v]){ 
            adj[e.u][e.v] = adj[e.v][e.u] = e.w;
        }
    }
    prim(V, adj);
    cout<<"\n";
    kruskal(V, edges);
    return 0;
}