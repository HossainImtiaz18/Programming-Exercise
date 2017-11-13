#include <iostream>
#include<stack>
using namespace std;

int main()
{
    int n,i,a;
    stack<int> imt;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>a;
        imt.push(a);

    }
   while(!imt.empty())
   {
       cout<<imt.top()<<" ";
      imt.insert(i);
      i--;
   }
    return 0;
}
