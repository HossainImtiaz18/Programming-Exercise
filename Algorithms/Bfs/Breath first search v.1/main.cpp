
#include <iostream>
#include <cstdio>
#include<vector>
#include<queue>
#include<memory.h>
#define LL long long
using namespace std;
vector<LL> v[100000];
LL level[100000];
LL n;
void bfs(LL root){
    int visited[100000]={0};
    queue<LL> Q;
    Q.push(root);
    visited[root]=1;
    level[root]=0;
    while(!(Q.empty())){
       LL p=Q.front();
        for(LL i=0;i<v[p].size();i++){
              LL m=v[p][i];
              if(!visited[m]){
                level[m]=level[p]+1;
                visited[m]=1;
                Q.push(m);
             }
        }
        Q.pop();
    }
   /* LL cnt=0;
    for(LL i=0;i<=n;i++){
      if(level[i]==0){
       cnt++;
      }
      level[i]=0;
    }
    return cnt;*/
}
int main()
{
    freopen("input.txt","r",stdin);
   freopen("output.txt","w",stdout);
    LL e,a,b,i,j,p,caseno=0,ini,ttl;
    while(1){
        for(i=0;i<99999;i++)
        v[i].clear();
        cin>>n;
        cin>>e;
        for(i=0;i<n+2;i++)
        level[i]=0;
        if(e==0&&n==0)
        return 0;
        for(i=0;i<e;i++){
        cin>>a>>b;
        v[a].push_back(b);
        v[b].push_back(a);
        }
        LL cntt=0;
        for(i=1;i<=n;i++){
            if(level[i]==0){
          bfs(i);
          cntt++;
            }
        }
       /*  for(i=1;i<=n;i++){
            cout<<level[i]<<' ';
        }*/
        cout<<"Case "<<++caseno<<": "<<cntt<<'\n';
        }
    return 0;
}
