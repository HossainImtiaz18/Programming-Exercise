/*
* Author: Jony Roy
* Date: 22-06-2016
* Contact: jonyroyice@gmail.com
*/
#include <bits/stdc++.h>
#define PI              3.1415926535897932384
#define EulerConstant   0.5772156649015328606
#define CountBit(a)     __builtin_popcount(a)
#define p_b(x)          push_back(x)
#define m_p(x)          make_pair(x)
#define ft              first
#define sd              second
using namespace std;
typedef double                   ddd;
typedef long long int            llint;
typedef unsigned long long int   ullint;
typedef long int                 lint;
typedef unsigned int             uint;
typedef unsigned long int        ulint;
typedef pair<int,int>            pint;
typedef pair<lint,lint>          plint;
typedef pair<llint,llint>        pllint;

llint bigMod(llint a,llint b,llint MOD)
{
    if(b==0)
        return 1;
    llint temp=bigMod(a,b>>1,MOD);
    temp=(temp*temp)%MOD;
    if(b&1)
        temp= (a*temp)%MOD;
    return temp;
}
#define MAX 100000002
#define MOD 4294967295
bitset<MAX>status;
int prime[MAX];
int PrimeNumber[1250];
int main(int argc, char *argv[])
{
   int sq=sqrt(MAX);
   PrimeNumber[1]=2;
   int k=1;
   for(int i=3;i<=sq;i+=2)
   {
       if(!status[i])
        {
          for(int j=i*i;j<=MAX;j+=i)
          status[j]=true;
          PrimeNumber[++k]=i;
        }
   }
   prime[2]=1;
   for(int i=3;i<=MAX-3;i+=2)
   {
       if(!status[i])
       prime[i]=((llint)(prime[i-1]*i))%MOD;
       else
       {
           prime[i]=prime[i-1];
       }
       prime[i+1]=prime[i];
   }
   int tc;
   scanf("%d",&tc);
   for(int i=1;i<=tc;i++)
   {
       int n;
       scanf("%d",&n);
       sq=sqrt(n);
       double lg=log10(n*1.);
       llint ans=1;
       for(int j=1;j<=k&&PrimeNumber[j]<=sq;j++)
       {
           llint cnt=1;
           while(cnt<=n)
           {
               cnt*=PrimeNumber[j];
           }
           cnt/=PrimeNumber[j];
           ans=(ans*cnt)%MOD;
       }
       ans=(ans*(prime[n]/prime[sq])%MOD)%MOD;
       printf("Case %d: %lld\n",i,ans);
   }
   return 0;
}

