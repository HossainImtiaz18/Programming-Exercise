#include <iostream>

using namespace std;
char str[100002];

int main()
{
    int a;
    long long i;
    cin>>a;
    while(a--)
    {
        bool flag[200]={0};
        cin>>str;
        for(i=0;str[i]!='\0';i++)
        {
            flag[str[i]-97]=true;
        }
        int res=0;
        for(i=0;i<200;i++)
        res=res+flag[i];
        cout<<res<<"\n";
    }
    return 0;
}
