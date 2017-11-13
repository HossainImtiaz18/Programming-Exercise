#include <iostream>

using namespace std;

int main()
{
    long long tc,mx,n,k,res,a,i;
    cin>>tc;
    while(tc--){
    mx=-1;
    cin>>n>>k;
    for(i=0;i<n;i++){
     cin>>a;
    res=k^a;
    if(mx<res)
    mx=res;
    }

    cout<<mx<<"\n";
    }

    return 0;
}
