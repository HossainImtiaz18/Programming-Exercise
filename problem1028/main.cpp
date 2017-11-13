#include <iostream>
#include <cstdio>
#include <vector>
#define mx 1000002
using namespace std;
#define LL long long
bool isPr[mx];
vector<LL> prime;
int main()
{
    for(LL i=4;i<mx;i+=2){
        isPr[i]=1;
    }
    prime.push_back(2);
    for(LL i=3;i<mx;i+=2){
          if(isPr[i]==0){
              prime.push_back(i);
                   for(LL j=i*i;j<mx;j=j+i){
                          isPr[j]=1;
                   }
          }
    }
  //  for(LL i=0;i<prime.size();i++){
    //    cout<<prime[i]<<" ";
   // }
   LL n,ca=0,a,ii;
   scanf("%lld",&n);
   while(n--){
      scanf("%lld",&a);
      LL cnt=1,s;
      ii = prime.size();
      for(LL i=0;prime[i]<=a&&i<ii;i++){
             s=1;
             while(a%prime[i]==0){
                  a/=prime[i];
                  s++;
                  //cout<<a<<' ';
             }
             cnt*=s;
      }
      printf("Case %lld: %lld\n",++ca,cnt-1);
   }
    return 0;
}
