//Abstract Class
// case 1 :- simple function overriding
#include <iostream>
using namespace std;
class Base {
    public:
    int a, b;
    virtual void output(){
        cout<<"base fn called ..."<<endl;
    }
};
class Derived : public Base{
    public:
    void output(){
        cout<<"Derived class fn"<<endl;
    }
};
int main() {
    
    cout << "Hello, World!" << endl;
    
    return 0;
}

// case 2 :-  only one virutal identity in base and rest are other entity
//any class which has a pure virtual functions or pv entity is called abstract class. //Abstract class can not have class object means in int main(){we can't write Base a;} but can create pointer to it 
#include <iostream>
using namespace std;
class Base {
    public:
    int a, b;
    virtual void output()=0;//pure virtual function :- must look for different definition
};
class Derived : public Base{
    public:
    void output(){
        cout<<"Derived class fn"<<endl;
    }
};
int main() {
    
    cout << "Hello, World!" << endl;
    
    return 0;
}
// case 3 :-  only one virutal identity in base and no other entity that types of class is called : - Interface Class
//any class which has a pure virtual functions or pv entity is called abstract class. //Abstract class can not have class object means in int main(){we can't write Base a;} but can create pointer to it 
#include <iostream>
using namespace std;
class Base {
    public:
    int a, b;
    virtual void output()=0;//pure virtual function :- must look for different definition
};
class Derived : public Base{
    public:
    void output(){
        cout<<"Derived class fn"<<endl;
    }
};
int main() {
    
    cout << "Hello, World!" << endl;
    
    return 0;
}