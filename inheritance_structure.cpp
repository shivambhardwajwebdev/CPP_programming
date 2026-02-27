#include<iostream>
using namespace std;
class Parent{
    protected:
    int a;
    public:
    Parent(){
        cout<<"Parent default constructor is called"<<endl;
        a=0;
    }
    Parent(int x){
        cout<<"Parent parametrized constructor is called"<<endl;
        a=x;
    }

};
class Child : private Parent{
    private: int m;
    public:
    Child(){
        cout<<"Child default constructor is called"<<endl;
        m=0;
    }
    Child(int x){
        m=x;
        cout<<"Child Parametrized constructor is called"<<endl;
    }
    Child(int x,int y):Parent(y){
        m=x;
        cout<<"Child Parametrized constructor is called"<<endl;
    }
   
 void printVal(void){
        cout<<"m : "<<m<<" & a : "<<a<<endl;
    }
};
int main(){
    Child n(1,2);
    n.printVal();
}