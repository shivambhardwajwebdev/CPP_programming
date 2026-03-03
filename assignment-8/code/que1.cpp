//Write a C++ program to demonstrate destructors. A destructor is a special member function that is automatically called when an object goes out of scope.
#include<iostream>
using namespace std;
class A{
    private:
    int a,b;
    public:
    A(){
        a=0;b=0;
        cout<<"Constructor is executed and the class A private varible are intialized"<<endl;
    }
    ~A(){
        cout<<"Destructor in executed and this object is no longer accessible"<<endl;
    }
    void printVal(){
        cout<<"a : "<<a<<" b : "<<b<<endl;
    } 
};
int main(){
    A obj1;
    obj1.printVal();
}