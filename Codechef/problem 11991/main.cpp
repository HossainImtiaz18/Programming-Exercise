//Accepted code......................
#include <iostream>
#include<stdio.h>
#include<vector>
using namespace std;
#define LL long long

int main()
{
    LL n,m,oc,key,i,j,vs;
    while(scanf("%lld%lld",&n,&m)!=EOF){
        vector< vector<LL> > v(1000000, vector<LL>(0));
    for(i=0;i<n;i++){
        scanf("%lld",&key);
        v[key].push_back(i+1);
    }
    for(i=0;i<m;i++){
        scanf("%lld%lld",&oc,&key);
        vs=v[key].size();
        if(vs<oc)
        printf("0\n");
        else
        printf("%lld\n",v[key][oc-1]);
    }
    }
    return 0;
}
