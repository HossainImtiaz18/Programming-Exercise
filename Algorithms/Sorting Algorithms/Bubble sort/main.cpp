//Bubble sort......................
#include <iostream>
#define LL long long
#define rep(i,a,b) for(i=a;i<b;i++)
#define repr(i,a,b) for(i=b;i>=a;i--)
using namespace std;

int main()
{
    LL a[10000],n,i,j,key;
    cin>>n;
    rep(i,0,n)
    cin>>a[i];
    repr(i,0,n-1)
       rep(j,0,i)
         if(a[j]>a[j+1])
           swap(a[j],a[j+1]);
    rep(i,0,n)
    cout<<a[i]<<" ";
    return 0;
}
