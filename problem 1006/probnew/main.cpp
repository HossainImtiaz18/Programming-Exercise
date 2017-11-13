#include <iostream>
#include <cstdio>
#include <memory.h>

using namespace std;
#define LL long long
#define INT(n) scanf("%lld",&n);
#define INF 10000007
LL a[1234567]={-1};
LL solve(LL n){
           if(a[n]>-1)
           return a[n];
           else{
         //   a[n] =(( solve(n-1)%(LL)INF+solve(n-2)%(LL)INF+solve(n-3)%(LL)INF+solve(n-4)%(LL)INF+solve(n-5)%(LL)INF+solve(n-6)%(LL)INF )%(LL)INF);
           LL t=0;
             for(LL i=1;i<=6;i++){
              t+=(solve(n-i) % (LL)INF);
              t%=(LL)INF;
             }
             a[n]=t%(LL)INF;
            return a[n]%=(LL)INF;
           }
           return a[n]%(LL)INF;
}
int main()
{
    LL n,caseno=1,tc;
    INT(tc);
    while(tc--){
        memset(a,-1,sizeof(a));
           for(LL i=0;i<6;i++) INT(a[i]);
           INT(n);
           printf("Case %lld: %lld\n",caseno++,solve(n)%(LL)INF);
    }
    return 0;
}
