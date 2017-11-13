#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc,k=1;
    double ax,ay,bx,by,b,a,c,C,cx,dx,area,s,H,z1,z2,A;
    cin>>tc;
    while(tc--)
    {
    cin>>ax>>ay>>bx>>by>>b>>C>>a;
    A=sqrt((bx-ax)*(bx-ax)+(by-ay)*(by-ay));
    c=A-C;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    H=area*2/c;
    z1=sqrt(fabs(b*b-H*H));
    cx=A-z1;
    dx=c-z1;
    cout<<"Case "<<k++<<":\n";
    printf("%.9lf %.9lf %.9lf %.9lf\n",cx,H,dx,H);
    }
}
