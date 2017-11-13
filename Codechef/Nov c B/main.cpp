#include <iostream>
#include<string.h>
using namespace std;
char str[1000003];
int main()
{
    int tc;
    long long l,i,p;
    cin>>tc;
    while(tc--)
    {
        cin>>str;
        bool flag=true;
        l=strlen(str);
        p=l-1;
        int cnt=0;
        bool check=false;
        for(i=0;i<=l/2;i++){
            if(str[i]!=str[p]){
               if(str[i]==str[p-1])
               {
                   p--;
                   cnt++;
               }
               else if(str[i+1]==str[p])
               {
                   i++;
                   cnt++;
               }
               else
               {
               flag=false;
               break;
               }
            }

            p--;
            if(cnt>1)
            {
                flag=false;
                break;
            }
        }
        if(l/2)
        if(flag&&check)
        cout<<"YES";
        else
        cout<<"NO";
        cout<<"\n";
    }
    return 0;
}
