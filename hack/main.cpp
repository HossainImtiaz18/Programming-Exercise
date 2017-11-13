#include <iostream>

using namespace std;

int main()
{
    int a[105],n,i,mx,h,k,ans;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    ans=a[n-1]-a[0];
    for(i=1;i<n-1;i++){
     mx=0;
     for(k=0;k<=n-2;k++){
         if(k+1==i)
         h=a[k+2]-a[k];
         else if(k!=i)
         h=a[k+1]-a[k];
         if(h>mx)
         mx=h;
     }
     if(mx<ans)
     ans=mx;

    }
    cout<<ans;
    return 0;
}
