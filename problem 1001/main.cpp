#include <iostream>

using namespace std;

int main()
{
    int tc,n;
    cin>>tc;
    while(tc--){
    cin>>n;
    if(n>10)
    cout<<n-10<<" "<<10<<endl;
    else
    cout<<0<<" "<<n<<endl;

    }
    return 0;
}
