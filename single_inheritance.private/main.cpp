#include <iostream>

using namespace std;
class base_class
{
    int a;
public:
    int b;
    void get_ab();
    int get_a(void);
    void show_a(void);
};
//base class declaration..........................
class D:private base_class
{
    int c;
public:
     void mul(void);
     void display(void);

};
//derivate class declaration.......................
void base_class::get_ab(void)
{
    cout<<"Enter the value of a and b:";
    cin>>a>>b;
}
int base_class::get_a(void)
{
    return a;
}
void base_class::show_a(void)
{
    cout<<"a="<<a<<endl;
}
void D::mul(void)
{
    get_ab();
    c=b*get_a();

}
void D::display(void)
{
    show_a();
    cout<<"b="<<b<<endl
        <<"c="<<c<<endl<<endl;
}
//.............................................

int main()
{
    D d;
    d.mul();
    d.display();


    d.mul();
    d.display();
    return 0;
}
