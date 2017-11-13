#include <iostream>
#include<set>
using namespace std;
set<long long > p;
int main()
{
    long long tc,n,i,m;
    cin>>tc;
    while(tc--)
    {
        cin>>n;
        for(i=0;i<n;i++)
        {
            cin>>m;
            p.insert(m);
        }
        cout<<p.size()<<"\n";
        p.clear();
    }
    return 0;
}
