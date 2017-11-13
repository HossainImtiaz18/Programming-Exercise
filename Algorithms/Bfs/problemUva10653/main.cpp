//Accepted..........................
#include<iostream>
#include<stdio.h>
#include<map>
#include<queue>
#include<algorithm>
#include<vector>
#include<memory.h>
using namespace std;
#define pii pair<int,int>
int fx[]={1,-1,0,0};
int fy[]={0,0,1,-1};
//int cell[1001][1001];
int visited[1001][1001];
int level[1001][1001];
int row,col;

void bfs(int sx,int sy,int dx,int dy){
            memset(level,-1,sizeof(level));
          queue<pii>Q;
           Q.push(pii(sx,sy));
           visited[sx][sy]=1;
           level[sx][sy]=0;
           while(!Q.empty()){
              pii top = Q.front();
              Q.pop();
                for(int i=0;i<4;i++){
                   int FX = top.first + fx[i];
                   int FY = top.second + fy[i];
                   if(((FX>=0&&FX<row) && (FY>=0&&FY<col)) && visited[FX][FY]==0){
                            level[FX][FY] = level[top.first][top.second]+1;
                            visited[FX][FY]=1;
                            Q.push(pii(FX,FY));
                            }
                }
                if(level[dx][dy]!=-1){
                cout<<level[dx][dy]<<"\n";
                return;
                }
           }
}

int main()
{
    int i,j;
    while(scanf("%d %d",&row,&col)&&row&&col){
                memset(visited,0,sizeof(visited));
               int n;
              scanf("%d",&n);
              for(i=0;i<n;i++){
                  int rn,bn;
                scanf("%d %d",&rn,&bn);
                 for(j=0;j<bn;j++){
                     int bc;
                   scanf("%d",&bc);
                  visited[rn][bc]=1;
                 }
              }
              int sx,sy,dx,dy;
              scanf("%d %d",&sx,&sy);
              scanf("%d %d",&dx,&dy);
              bfs(sx,sy,dx,dy);
    }
    return 0;
}
