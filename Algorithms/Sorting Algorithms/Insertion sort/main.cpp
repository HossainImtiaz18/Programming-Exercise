//Insertion sort......................
#include <iostream>
#define LL long long
#define rep(i,a,b) for(i=a;i<b;i++)
using namespace std;

int main()
{
    LL a[100000],i,j,n,key;
    cin>>n;
    rep(i,0,n)
      cin>>a[i];
    rep(i,1,n){
       key=a[i];
       j=i-1;
       while(j>=0&&a[j]>key){
        a[j+1]=a[j];
           j--;
       }
       a[j+1]=key;
    }
    rep(i,0,n)
      cout<<a[i]<<" ";
    return 0;
}
