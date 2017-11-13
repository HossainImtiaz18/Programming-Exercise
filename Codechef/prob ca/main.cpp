#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    long long tc,l,b;
    double mx,mn;
    cin>>tc;
    while(tc--){
     cin>>l>>b;
     mx=sqrt(l*l+b*b);
     mn=sqrt(b*b-l*l);
     cout<<mn<<" "<<mx<<"\n";
    }
    return 0;
}
