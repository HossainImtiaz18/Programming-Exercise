#include <bits/stdc++.h>

using namespace std;
int main()
{
     long a,n;
     char s;
     cin>>a;
     n=a;
     int p=0;
     while(n--){
       cin>>s;
       p=p+(s-48);
     }
     a-=p;
     //cout<<a<<p;
     cout<<abs(p-a);
      return 0;
}
