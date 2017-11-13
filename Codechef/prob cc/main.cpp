#include <iostream>

using namespace std;
long long s[100000];
int main()
{
 long long a[105][105],i,j;
    for(i=0;i<=105;i++){
        a[i][0]=1;
      for(j=1;j<i;j++){
        a[i][j]=a[i-1][j-1]+a[i-1][j];
      }
      a[i][j]=1;
    }
   /* for(i=0;i<10;i++){
      for(j=0;j<=i;j++)
      {
          cout<<a[i][j]<<" ";
      }
      cout<<"\n";
    }*/
    unsigned long long n,c,r,k,cnt=0,kk,chk,g,gg,cntt;
    cin>>n;
    while(n--){
        cin>>r>>c>>gg;
        g=gg;
        chk=0;
        cntt=0;
        cnt=0;
        k=0;
    for(j=c;j>=0;j--){
    if(j==c)
    kk=r;
    else
    kk=j;
    cnt++;
    for(i=kk;i<100;i++)
    {
        if(a[i][j]<=g){

         g=g-a[i][j];
         s[k++]=a[i][j];
        }
        if(g==0){
         chk=1;
         break;
        }
       if(a[i][j]>g){
        break;
       }
    }
    if(chk==1)
    break;
    }
    cout<<cnt<<"\n";
    for(i=0;i<k;i++)
    cout<<s[i]<<" ";
    cout<<"\n";
    }
    return 0;
}
