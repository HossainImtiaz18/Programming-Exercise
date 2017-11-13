//inserting into heap...................
#include <iostream>
#include <cstdio>
#define mx 1000000
using namespace std;
int a[100];
void insert(int x,int n){

         while(x>a[n/2]){
               swap(a[n],a[n/2]);
               n/=2;
         }

}
int main()
{
    int n,i,t,x;
    a[0]=mx;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
       scanf("%d",&x);
       a[i]=x;
       if(i>1){
              t = i;
              while(x>a[t/2]){
                swap(a[t],a[t/2]);
                t/=2;
              }
       }
    }
    while(1){
    for(i=1;i<=n;i++){
     printf("%d ",a[i]);
    }
     printf("\nEnter value to insert into heap.\n");
     scanf("%d",&x);
     a[++n]=x;
     insert(x,n);
    }
    return 0;
}
