//An execellent algorithm to find shortest path for graph using bfs.................
#include <iostream>
#include<cstdio>
#include<queue>
#include<cstdlib>
#include<algorithm>
#include<memory.h>
using namespace std;
int g[100][100];
int node;
int level[100];
int visited[100];
int parent[100];
queue<int> q;
int bfs(int s,int d){
      memset(visited,0,sizeof(visited));
      memset(level,0,sizeof(level));
      memset(parent,0,sizeof(parent));
      q.push(s);
      while( !q.empty() ){
      int r= q.front();
      q.pop();
          for(int i=1;i<=node;i++){
            if(g[r][i]==1&&visited[i]==0){
                q.push(i);
                parent[i]=r;
                level[i]=level[r]+1;
            }
          }
          visited[r]=1;
      }
      return level[d];
}
void printPath(int n){
    if(n==0)
    return;
    printPath(parent[n]);
    printf("%d  ",n);
}
int main()
{
   int edge,x,y,src,des;
   scanf("%d",&node);
   scanf("%d",&edge);
   for(int i=0;i<edge;i++){
      scanf("%d %d",&x,&y);
      g[x][y]=1;
   }
   while(1){
   printf("Enter the root and source to know about path.\n");
   scanf("%d %d",&src,&des);
   int dis=bfs(src,des);
   printf("Distance from %d to %d is %d.\n",src,des,dis);
   printPath(des);
   }
   return 0;
}
