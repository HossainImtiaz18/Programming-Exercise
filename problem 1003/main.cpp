#include <iostream>
#include<string>
using namespace std;

int main()
{
    int tc,p=1,num;
    string str1,str2;
    cin>>tc;
    while(tc--){
        cin>>num;
        int flag=0;
        int check=0;
        for(int i=0;i<num;i++){
            cin>>str1>>str2;
            if(str1!="soda"&&str2!="water")
            flag=1;

        }
        cout<<"Case "<<p++<<": ";
        if(flag==0)
        cout<<"Yes\n";
        else
        cout<<"No\n";

    }
    return 0;
}
