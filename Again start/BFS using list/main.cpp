#include<iostream>
#include<vector>
#include<algorithm>
#include<cstdlib>
#include<cstdio>
#include<queue>
#include<memory.h>
using namespace std;
queue<int> q;
vector< vector<int> > g(100);
int visited[100];
int level[100];
int parent[100];
int n;
int bfs(int s,int d){
    memset(visited,0,sizeof(visited));
    memset(level,0,sizeof(level));
        int i,u;
        visited[s]=1;
        q.push(s);
        while(!q.empty()){
                    int cn = q.front();
           for(i=0;i<g[cn].size();i++){
               u= g[cn][i];
                 if(visited[u]==0){
                     visited[u]=1;
                     q.push(u);
                     level[u]=level[cn]+1;
                 }

           }
              q.pop();
        }
        return level[d];

}
int main()
{
    int e,i,j,u,v,s,d;
    scanf("%d %d",&n,&e);
    for(i=0;i<e;i++){
      scanf("%d %d",&u,&v);
      g[u].push_back(v);
    }
   /* for(i=1;i<=n;i++){
        printf("%d",i);
      for(j=0;j<g[i].size();j++){
          printf(" %d",g[i][j]);
      }
      printf("\n");
    }*/
    while(1){
    printf("Enter the src and des.\n");
    scanf("%d %d",&s,&d);
    int dis = bfs(s,d);
     printf("%d \n",dis);
    }
    return 0;
}
