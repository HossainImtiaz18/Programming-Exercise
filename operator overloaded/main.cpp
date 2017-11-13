#include <iostream>

using namespace std;
class complex_number
{
    float x,y;
    public:
    complex_number(){}
    complex_number(float real,float imag){x=real;y=imag;}
    complex_number operator+(complex_number);
    complex_number operator-(complex_number);
    void display(void);
};
complex_number complex_number::operator+(complex_number c)
{
    complex_number temp;
    temp.x=x+c.x;
    temp.y=y+c.y;
    return temp;
}
complex_number complex_number::operator-(complex_number c)
{
    complex_number temp2;
    temp2.x=x-c.x;
    temp2.y=y-c.y;
    return temp2;
}
void complex_number::display(void)
{
    cout<<x<<" + j "<<y<<"\n";
}
int main()
{
    complex_number c1,c2,c3,c4;
    c1=complex_number(2.5,3.5);
    c2=complex_number(1.6,2.7);
            c3=c1+c2;
    cout<<"c1 = ";c1.display();
    cout<<"c2 = ";c2.display();
    cout<<"c3 = ";c3.display();
            c4=c1-c2;
    cout<<"c1 = ";c1.display();
    cout<<"c2 = ";c2.display();
    cout<<"c4 = ";c4.display();
    return 0;
}
