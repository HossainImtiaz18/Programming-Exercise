#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int test,p;
long long i,n,b,ca,c,a;
double f[1000010];
int main()
{
    scanf("%d",&test);
    for(p=1;p<=test;p++)
    {
        scanf("%lld%lld%lld",&a,&b,&c);
        a*=a;b*=b;c*=c;
        printf("Case %lld: %s\n",++ca,(a+b==c||b+c==a||c+a==b)? "yes":"no");
    }
    return 0;
}
