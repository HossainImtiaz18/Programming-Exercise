#include <iostream>
#include<conio.h>
//#include<windows.h>


using namespace std;

int main()
{
   int a,*ptr1,**ptr2;
   ptr1=&a;
   ptr2=&ptr1;
   cout<<"The address of a :"<<ptr1<<endl;
   cout<<"The address of ptr1 :"<<ptr2<<endl;
   cout<<"\n\n";
   //system("CLS");
   cout<<"After incrementing the address values:\n\n";
   ptr1+=2;
   cout<<"The address of a :"<<ptr1<<endl;
   ptr2+=2;
   cout<<"The address of ptr1 :"<<ptr2<<endl;


    return 0;
}
