//Merge sort ..... using recursive.........bottom up.........
#include <iostream>
#define LL long long
#define rep(i,a,b) for(i=a;i<b;i++)
LL a[1000000],b[1000000];
using namespace std;
void merge(LL low,LL mid,LL high){
    LL i=low,h=low,j=mid+1,k;
    while(h<=mid&&j<=high)
       if(a[h]>a[j]) b[i++]=a[j++];
       else b[i++]=a[h++];
    if(h>mid) for(k=j;k<=high;k++) b[i++]=a[k];
    else for(k=h;k<=mid;k++) b[i++]=a[k];
    for(k=low;k<=high;k++) a[k]=b[k];
}

void merge_sort(LL low,LL high){
     if(low<high){
       LL mid=(low+high)/2;
       merge_sort(low,mid);
       merge_sort(mid+1,high);
       merge(low,mid,high);
     }

}
int main()
{
    LL n,i;
    cin>>n;
    rep(i,0,n) cin>>a[i];
    merge_sort(0,n-1);
    rep(i,0,n) cout<<a[i]<<' ';
    return 0;
}
