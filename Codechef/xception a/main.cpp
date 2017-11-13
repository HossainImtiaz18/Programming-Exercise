#include <iostream>

using namespace std;
int a[100];
int main()
{
    string str;
    int i;
    cin>>str;
    for(i=0;i<str.size();i++){
      a[str[i]-96]++;
    }
    int chk=0;
    for(i=1;i<=26;i++){
      if(a[i]){
       if(a[i]!=i){
           cout<<"NO";
           chk=1;
           break;
       }
      }
    }
    if(chk==0)
    cout<<"YES";

    return 0;
}
