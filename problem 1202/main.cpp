#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
    unsigned long long n,a,b,c,d,ca=1,aa,bb;
    cin>>n;
    while(n--){
       scanf("%llu %llu %llu %llu",&a,&b,&c,&d);
       aa =a-c;
       (aa<0)? aa*=(-1):aa;
       //cout<<a<<" ";
       bb =b-d;
       (bb<0)? bb*=(-1):bb;
       //cout<<b<<" ";
       printf("Case %llu: ",ca++);
       if(a==c&&b==d)
       printf("0");
       else if(aa==bb)
       printf("1");
       else if(aa==0&&bb!=0){
           if(bb%2==0) printf("2");
           else printf("impossible");
       }
       else if(aa!=0&&bb==0){
           if(aa%2==0) printf("2");
           else printf("impossible");
       }
       else if((aa%2==0&&bb%2==0)||(aa%2!=0&&bb%2!=0)){
         printf("2");
       }
       else printf("impossible");
       printf("\n");
    }
    return 0;
}
