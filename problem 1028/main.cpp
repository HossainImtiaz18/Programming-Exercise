#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
   long long n,a,sq,cnt,ca=1,b,s;
   scanf("%lld",&n);
   while(n--){
        scanf("%lld",&a);
        cnt=1;
        sq=sqrt(a);
        b=a;
        while(!(a&1)){
            b=(a>>1);
            a=b;
            cnt++;
          //  cout<<a<<' ';
        }
        //cout<<cnt;
        for(long long i=3;i<=b;i+=2){
               s=1;
                while(a%i==0){
                      a/=i;
                      b=a;
                      s++;
                }
                cnt*=s;
        }
        printf("Case %lld: %lld\n",ca++,cnt-1);
   }
    return 0;
}
