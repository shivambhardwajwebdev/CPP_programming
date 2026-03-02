#include <iostream>
using namespace std;
class Base{
private:
    int data1, data2;
public:
    Base(int a , int b = 0) : data1(a), data2(b) {}
    int getData1() { return data1; }
    int getData2() { return data2; }
};
class Derived : public Base{
public:
using Base::Base; 
    void show()
    {
        cout << "data1 = " << getData1() << " data2 = " << getData2();
    }
};
int main(){
    Derived d(2,3);
    d.show();
    return 0;
}