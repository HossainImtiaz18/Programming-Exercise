#include <iostream>

using namespace std;

int main()
{
   int numbers[50],*ptr;
   int n,i;
   cout<<"Enter the count:"<<endl;
   cin>>n;
   cout<<"Enter the number one by one:"<<endl;
   for(i=0;i<n;i++)
   cin>>numbers[i];
   ptr=numbers;
   int sum=0;
   for(i=0;i<n;i++)
   {
       if(*ptr%2==0)
       sum=sum+*ptr;
       ptr++;
   }
   cout<<"\nSum of even numbers:\n"<<sum;
    return 0;
}
