//Accepted code
#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;
#define ll double
int main()
{
    ll a,b,c,area,s,x;
    while(scanf("%lf %lf %lf",&a,&b,&c)==3)
    {
        s=(a+b+c)/2.000;
        x=s*(s-a)*(s-b)*(s-c);
        if(a<=0||b<=0||c<=0)
        printf("-1.000\n");
        else if(x<0)
        printf("-1.000\n");
        else if(a+b>c&&b+c>a&&c+a>b)
        {

            area=(4.000*sqrt(x))/3.000;
            printf("%.3lf\n",area);
        }
        else
        printf("-1.000\n");
    }
    return 0;
}
