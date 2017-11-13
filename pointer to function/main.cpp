#include <iostream>

using namespace std;

typedef void (*funptr)(int ,int);
void add(int i,int j)
{
    cout<<i<<"+"<<j<<"="<<i+j;
}
void subtruct(int i,int j)
{
    cout<<i<<"-"<<j<<"="<<i-j;
}
int main()
{
    funptr ptr;
    ptr=&add;
    ptr(1,2);
    cout<<endl;
    ptr=&subtruct;
    ptr(3,2);
    return 0;
}
