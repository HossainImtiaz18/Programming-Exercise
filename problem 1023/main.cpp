#include <iostream>
#include<stdio.h>
#include<string.h>
#include<algorithm>
using namespace std;
int h=0;
//char str1[200005][2005];
void permute(char str[],int i,int n,int b)
{
  //  printf("0");
    int j;
    if(i==n)
    {
   // strcpy(str1[h],str);
    cout<<str<<"\n";
    h++;
    }
    else if(h<b)
    {
        for(j=i;j<=n;j++)
        {

            swap(str[i],str[j]);
            permute(str,i+1,n,b);
            swap(str[i],str[j]);

        }

    }
}
int main()
{
    int tc,i,a,b,caseno=1;
    char str[50];
    char p;
    scanf("%d",&tc);
    while(tc--)
    {
        for(i=0;i<26;i++)
        {
            str[i]='\0';
        }
        h=0;
        scanf("%d %d",&a,&b);
        printf("Case %d:\n",caseno++);
        p='A';
        for(i=0;i<a;i++){
        str[i]=p;
        p++;
        }
        str[i]='\0';
        //printf("%c",str[2]);
        permute(str,0,a-1,b);
      //  printf("1");
       /* for(i=0;((i<b)&&(i<h));i++)
        {
            printf("%s\n",str1[i]);
        }*/
    }
    return 0;
}
