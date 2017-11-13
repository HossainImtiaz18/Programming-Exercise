//Dynamic programming........cutting edge..............
#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <cmath>
#include <algorithm>

using namespace std;
int cutting_cost(int *p,int n,int *c){
            int q,i;
           if(c[n]>=0)
           return c[n];
           if(n==0)
           q=0;
           else{
                q=-100;
                for(i=1;i<=n;i++){
                   q=max(q,p[i]+cutting_cost(p,n-i,c));
                }
                c[n]=q;
           }

           return q;
}
int mem(int *p,int n){
     int c[100];
     for(int i=0;i<=n;i++){
          c[i]=-1;
     }
     return cutting_cost(p,n,c);
}

int main()
{
    int p[100],l,i,n;
    scanf("%d",&l);
    for(i=1;i<=l;i++)
       scanf("%d",&p[i]);
    scanf("%d",&n);
    int t=mem(p,n);
    printf("%d\n",t);
    return 0;
}
