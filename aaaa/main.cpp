#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long x,a[105];
    int n,l;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        scanf("%I64d",&a[i]);
    }
    while(1){
         for(int i=1;i<n;i++){
              if(a[i]>a[i+1]){
                     l=i;
                     while(a[i]>a[i+1]&&i+1<=n){
                        swap(a[i],a[i+1]);
                        i+=2;
                     }
                     i--;
                     printf("%d %d\n",l,i);
              }
         }
         int c=0;
         for(int j=1;j<n;j++){
                 if(a[j]>a[j+1]){
                  c=1;
                  break;
                 }
         }
         if(c==0)
         break;
    }
    return 0;
}
