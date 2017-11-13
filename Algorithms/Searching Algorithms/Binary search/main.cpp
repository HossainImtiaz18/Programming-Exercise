//Binary search..........................array must be sorted..................
#include <iostream>
#include <algorithm>
#define LL long long
#define rep(i,a,b) for(i=a;i<b;i++)
using namespace std;
LL bin_src(LL *a,LL low,LL high,LL key){
    if(low<=high){
        LL mid=(low+high)/2;
        if(a[mid]==key)
            return mid;
        else if(a[mid]<key)
            bin_src(a,mid+1,high,key);
        else
            bin_src(a,low,mid-1,key);
        }
    else
        return -1;
}

int main()
{
    LL a[100000],n,i,j,key,ok=-1;
    cin>>n;
    rep(i,0,n)
    cin>>a[i];
    cin>>key;
    sort(a,a+n);
    ok=bin_src(a,0,n-1,key);
    ((ok>=0)?(cout<<"Found "<<ok+1):(cout<<"Not found"));
    return 0;
}
