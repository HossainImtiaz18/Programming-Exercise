//Accepted..................................
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
#include<map>
#include<queue>
using namespace std;
map<int,int> visited;
int caseno;
void bfs(int start, map<int ,vector<int> > imt){
       queue<int> Q;
       Q.push(start);
       visited[start]=0;
       while(!Q.empty()){
            int teck = Q.front();
            for(int i=0;i<imt[teck].size() ;i++){
                  int key = imt[teck][i];
                  if(!visited.count(key)){
                    visited[key]=visited[teck]+1;
                    Q.push(key);
                  }
            }
            Q.pop();
       }
}

int main()
{
    int N,a,b;
    caseno = 1;
    while(scanf("%d",&N)&&N){
        map<int , vector<int> > imt;
        while(N--){
           scanf("%d %d",&a,&b);
           imt[a].push_back(b);
           imt[b].push_back(a);
        }
        //...................
        int start,ttl;
        while(scanf("%d %d",&start,&ttl)&&(start!=0 ||ttl!=0)){
                 map<int,int>::const_iterator itr;
                 visited.clear();
                 bfs(start,imt);
                 int cnt=0;
                 for(itr = visited.begin(); itr!= visited.end() ;++itr){
                      if( ((*itr).second > ttl ) ){
                      cnt++;
                      }
                 }
                 cnt+=imt.size() - visited.size();
                 printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",caseno++,cnt,start,ttl);
        }
    }
    return 0;
}
