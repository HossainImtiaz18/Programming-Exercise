#include <iostream>
#include <stack>
#include <cstdlib>
#include <algorithm>
#include <cstdio>
#include<memory.h>
using namespace std;
int g[100][100];
int visited[100];
int level[100],n;
stack<int> st;
int dfs(int s,int d){
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
     int i,p;
     st.push(s);
     while(!st.empty()){

          p=st.top();

          visited[p]=1;
          for(i=1;i<=n;i++){
            if(g[p][i]==1&&visited[i]!=1){
                   st.push(i);
                   visited[i]=1;
                   level[i]=level[p]+1;
            }
          }
          st.pop();

     }
     return level[d];


}
int main()
{
    int e,i,u,v,dis,s,d;
    scanf("%d",&n);
    scanf("%d",&e);
    for(i=0;i<e;i++){
      scanf("%d %d",&u,&v);
      g[u][v]=1;
    }
    while(1){
    printf("Enter the src and destination.\n");
    scanf("%d %d",&s,&d);
    dis = dfs(s,d);
    printf("Distance from %d to %d is %d.\n",s,d,dis);
    }
    return 0;
}
