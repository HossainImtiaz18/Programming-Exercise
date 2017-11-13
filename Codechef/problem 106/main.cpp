#include <iostream>
#include <cstdio>
#include <algorithm>
#include <memory.h>
using namespace std;
long long chk[1000005];
int main()
{
     long long n,tc,a,b,c,ans,x,y,z,cnt;
     while(scanf("%lld",&n)!=EOF){
         ans=0;
               memset(chk,0,sizeof(chk));
               for(long long i=1;i*i<=n;i++){
                      for(long long j=i+1;j*j<=n;j+=2){
                             if(__gcd(i,j)==1){

                                  a= j*j-i*i;
                                  b=2*i*j;
                                  c=i*i+j*j;
                                  if(c>n)
                                  break;
                                  ans++;
                                  x=a;y=b;z=c;
                                  while(z<=n){
                                        chk[x]=chk[y]=chk[z]=1;
                                        x+=a;
                                        y+=b;
                                        z+=c;
                                  }

                             }
                      }
               }
               cnt=0;
               for(long long i=1;i<=n;i++){
                 if(chk[i]==1)
                 cnt++;
               }
               printf("%lld %lld\n",ans,n-cnt);

     }
    return 0;
}
