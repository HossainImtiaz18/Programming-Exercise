//Accepted code........................
#include <iostream>
#include <cstdio>

using namespace std;
#define m 10000007
#define LL long long
LL dp[1000000];
LL a,b,c,d,e,f;
LL fn(LL n){
    if(n==0) return a;
    if(n==1) return b;
    if(n==2) return c;
    if(n==3) return d;
    if(n==4) return e;
    if(n==5) return f;
    if(dp[n]!=-1) return dp[n];
    else{
     dp[n]=(fn(n-1) + fn(n-2) +fn(n-3) + fn(n-4) + fn(n-5)+ fn(n-6))%m;
     return dp[n];
    }
}
int main()
{
    LL tc,n,i=0,j;
    cin>>tc;
    while(tc--){
    cin>>a>>b>>c>>d>>e>>f>>n;
    for(j=0;j<=100005;j++)
    dp[j]=-1;
    printf("Case %lld: %lld\n",++i,fn(n)%m);
    }
    return 0;
}
