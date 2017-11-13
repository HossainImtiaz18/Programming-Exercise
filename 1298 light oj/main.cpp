#include <bits/stdc++.h>

using namespace std;
long long k=0,md=1000000007;
long long pr[505];
bool flag[3600];
long long sieve(){
          for(long long i=3;i<=62;i+=2){
              if(flag[i]==0){
                 for(long long j=i*i;j<3598;j+=2*i){
                 flag[j]=1;
                 }
              }
          }
          k=0;
          pr[k++]=2;
          for(long long i=3;i<3599;i+=2){
               if(flag[i]==0){
                pr[k++]=i;
               }
          }
}
long long bigMode(long long b,long long p){
        if(p==0)
          return 1;
        else if(p%2==0){
            long long T = bigMode(b,p/2);
            return ((T%md)*(T%md))%md;
        }
        else{
             return ((b%md)*(bigMode(b,p-1)%md))%md;
        }
}
int main()
{
    sieve();
    long long tc,n,sum=0,ans=1,a,b;
    scanf("%lld",&tc);
    for(long long i=1;i<=tc;i++){
        ans=1;
        sum=1;
        scanf("%lld %lld",&a,&b);
        for(long long i=0;i<b;i++){
          ans=((ans%md)*((pr[i]-1)%md))%md;
          sum*=pr[i];
        }
       //cout<<ans<<" "<<sum<<" ";
      //  cout<<bigMode(b,a-b-1)<<" ";
        ans=(ans%md)*(sum%md)*(bigMode(b,a-b-1)%md)*((a-b)%md);
      // ans=(ans)*(sum)*(bigMode(b,a-b-1))*((b-a));
        printf("Case %lld: %lld\n",i,ans%md);
    }
    return 0;
}
