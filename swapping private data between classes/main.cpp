#include <iostream>

using namespace std;

class one;
class two
{
    int b;
    public :
    void setvalue(int i){b=i;}
    friend void swapp(one,two);
};
class one
{
    int a;
    public :
    void setvalue(int i){a=i;}
    friend void swapp(one,two);
};
void swapp(one m,two n)
{
    int temp=m.a;
    m.a=n.b;
    n.b=temp;
    cout<<"One = "<<m.a<<"\nTwo = "<<n.b<<endl;
}
int main()
{
    one imt;
    imt.setvalue(10);
    two imu;
    imu.setvalue(20);
    swapp(imt,imu);
    return 0;
}
