#include <iostream>

using namespace std;
class complex_number
{
    float x,y;
    public:
    complex_number(){x=0;y=0;}
    complex_number(float a){x=y=a;}
    complex_number(float real,float imag){x=real;y=imag;}
    friend complex_number sum(complex_number,complex_number);
    friend void show(complex_number);
};
complex_number sum(complex_number c1,complex_number c2)
{
    complex_number c3;
    c3.x=c1.x+c2.x;
    c3.y=c1.y+c2.y;
    return(c3);
}
void show(complex_number c)
{
    cout<<c.x<<"+j"<<c.y<<"\n";
}
int main()
{
   complex_number a(2.7,3.5);
   complex_number b(1.6);
   complex_number c;
   c=sum(a,b);
   cout<<"A=";show(a);
   cout<<"B=";show(b);
   cout<<"C=";show(c);
    return 0;
}
