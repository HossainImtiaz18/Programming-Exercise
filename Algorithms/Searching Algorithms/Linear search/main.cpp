//Linear search.............................
#include <iostream>
#define LL long long
#define rep(i,a,b) for(i=a;i<b;i++)

using namespace std;

int main()
{
    LL a[100000],key,i,take=0,n;
    cin>>n;
    rep(i,0,n)
    cin>>a[i];
    cin>>key;
    rep(i,0,n)
     if(a[i]==key){
      take=1;
      break;}
    ((take) ? (cout<<"Found") : (cout<<"Not found"));
    return 0;
}
