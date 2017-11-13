#include <iostream>
#include<stdio.h>
using namespace std;

int main()
{
    long long a,tc,n,s;
    scanf("%lld",&tc);
    while(tc--){
      scanf("%lld",&n);
      long long p=0,cnt=0,chk=1;
      scanf("%d",&a);
      s=a;
      p=a;
      n--;
      while(n--){
         scanf("%d",&a);
         if(a!=p){
             if(chk==0)
             cnt--;
         cnt+=2;
         p=a;
         chk=0;
         }
         else
         chk=1;
      }
      printf("%lld\n",cnt);
    }
    return 0;
}
