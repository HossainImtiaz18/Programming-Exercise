#include <iostream>
#include <cstdio>

using namespace std;
int g[100][100];
int visited[100];
int level[100];
int n;
void dfs(int src){
    int i;
    visited[src]=1;
         for(i=1;i<=n;i++){
            if(g[src][i]==1&&visited[i]!=1){
              visited[i]=1;
              level[i]=level[src]+1;
              dfs(i);
            }
         }
}
int main()
{

   int e,i,u,v,s;
   scanf("%d %d",&n,&e);
   for(i=0;i<e;i++){
     scanf("%d %d",&u,&v);
     g[u][v]=1;
   }
   scanf("%d",&s);
   dfs(s);
   printf("\n");
   for(i=1;i<=n;i++){
    printf("%d ",level[i]);
   }

    return 0;
}
