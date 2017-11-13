#include<iostream>//Lightoj 1238
#include<memory.h>
#include<queue>
#include<cmath>
#include<algorithm>
using namespace std;
int row,col;
char g[25][25];
int visited[25][25],dis[25][25];//....dis array should be 2D
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
struct nood{
    int x,y;
};
//........Your function...........
/*
int bfs(nood pos)
{

 int fr=1,fe=2;
 memset(visited,0,sizeof(visited));
 memset(dis,0,sizeof(dis));
 nood Q[500],now,tmp;
 Q[1]=pos;
 visited[pos.x][pos.y]=1;
 while(fr<fe)
 {
   now=Q[fr];
   if(g[now.x][now.y]=='h')
   return dis[fe];
   for(int i=0;i<4;i++)
   {
       tmp.x=now.x+dx[i];
       tmp.y=now.x+dy[i];
       if(tmp.x>=1&&tmp.x<=row&&tmp.y>=1&&tmp.y<=col)
       {
           if(!visited[tmp.x][tmp.y]&&g[tmp.x][tmp.y]!='#'&&g[tmp.x][tmp.y]!='m')
           {
               visited[tmp.x][tmp.y]=1;
               dis[fe]=dis[fr]+1;
               Q[fe++]=tmp;

           }
       }
   }
fr++;
 }
}*/
//................Compare with it.............................

int bfs(nood pos)
{
         memset(visited,0,sizeof(visited));
         memset(dis,0,sizeof(dis));
         queue<nood> Q; //.Use queue.because it's easy to pop and to check loop condition.
         nood now,tmp;
         Q.push(pos);
         visited[pos.x][pos.y]=1;
         dis[pos.x][pos.y]=0; // .......Distance have to be two dimensional...........
         while(!Q.empty())
         {
               now=Q.front();
               for(int i=0;i<4;i++)
               {
                   tmp.x=now.x+dx[i];
                   tmp.y=now.y+dy[i];

                   if((tmp.x>=1&&tmp.x<=row)&&(tmp.y>=1&&tmp.y<=col))
                   {   if(g[tmp.x][tmp.y]=='h'){
                        return dis[now.x][now.y]+1;
                        }
                        else if((!visited[tmp.x][tmp.y])&&(g[tmp.x][tmp.y]!='#')&&(g[tmp.x][tmp.y]!='m'))
                       {
                           visited[tmp.x][tmp.y]=1;
                           dis[tmp.x][tmp.y]=dis[now.x][now.y]+1;
                           Q.push(tmp);
                       }
                   }
               }
               Q.pop();
         }
         return dis[now.x][now.y]+1;//......Sometimes can't reach at 'h',
}

//.............................................
int main()
{
  char k;
  int tc;
  nood a,b,c;
  cin>>tc;//......Missed to take input testcase number
  for(int ii=1;ii<=tc;ii++)
  {

          cin>>row>>col;
          for(int i=1;i<=row;i++)
          {
              for(int j=1;j<=col;j++)
              {
                  cin>>g[i][j];
                  if(g[i][j]=='a')
                  {
                   a.x=i;
                   a.y=j;
                  }
                  if(g[i][j]=='b')
                  {
                      b.x=i;
                      b.y=j;
                  }
                  if(g[i][j]=='c')
                  {
                      c.x=i;
                      c.y=j;
                  }

              }
          }
          int t1=bfs(a);
          int t2=bfs(b);
          int t3=bfs(c);
          int maxi=max(max(t1,t2),t3);
          cout<<"Case "<<ii<<": "<<maxi<<endl;
     }
     return 0;
}
