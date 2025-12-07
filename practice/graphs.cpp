#include<bits/stdc++.h>
using namespace std;
class graph{
  public:
  vector<list<int>> adj;
  graph(int n){
    adj.resize(n);
  }
  void addedge(int u,int v,bool dir){
    //dir=0 is undir
    //dir=1 is dir
    adj[u].push_back(v);
    if(dir==0) adj[v].push_back(u);
  }
  void showgraph(){
    for(int i=0;i<adj.size();i++){
      cout<<i<<"->";
      for(int v:adj[i])cout<<v<<" ";
      cout<<endl;
    }
  }
};
int main(){
  graph g(5);
  g.addedge(0,1,1);
  g.addedge(1,2,1);
  g.addedge(3,4,1);
  g.showgraph();
  return 0;
}