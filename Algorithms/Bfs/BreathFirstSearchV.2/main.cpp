#include<iostream>
#include<stdio.h>
#include<queue>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> G[100];
void bfs(int n,int src=1){
    int level[100];
    int visited[100]={0};
    int parent[100];
    queue<int> Q;
    Q.push(src);
    level[src]=0;
    visited[src]=1;
    parent[src]=0;
    while(!(Q.empty())){
        int u = Q.front();
        for(int i=0 ; i<G[u].size() ; i++){
             int v = G[u][i];
             if(!visited[v]){
                visited[v]=1;
                level[v]=level[u]+1;
                parent[v]=u;
                Q.push(v);
             }
        }
        Q.pop();
    }
    for(int i=1;i<=n;i++){
       cout<<"From "<<src<<" to "<<i<<" minimum distant is "<<level[i]<<endl;
       int s=i;
       while(parent[s]){
            cout<<parent[s]<<' ';
            s=parent[s];
       }
       cout<<"................................\n";
    }
}
int main()
{
    int ver,edg,a,b,c=1;
    cin>>ver>>edg;
    for(int i=1;i<=edg;i++){
     cin>>a>>b;
     G[a].push_back(b);
     G[b].push_back(a);
    }
    bfs(ver);
    return 0;
}
