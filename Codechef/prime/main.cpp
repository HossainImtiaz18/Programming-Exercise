#include <bits/stdc++.h>

using namespace std;
int a[15][15];
int main()
{
    int tc,sum,n,m;
    string s[105];
    scanf("%d",&tc);
    for(int i=1;i<=tc;i++){
        scanf("%d %d",&n,&m);
        for(i=0;i<n;i++){
         cin>>s[i];
        }
        sum=0;
        for(int i=0;i<n;i++){
            int cnt=0;
           for(int j=0;j<m;j++){
              if(s[j][i]=='1')
              cnt++;
           }
           if(cnt>1)
           sum+=cnt-1;
        }
        printf("%d",sum);
    }
    return 0;
}
