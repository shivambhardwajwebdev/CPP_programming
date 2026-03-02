//Virtual functions in c++
//polymorphism is the ability of function to exist in more than i form
#include <iostream>
using namespace std;
class Base{ //Abstract Class
    public: 
    virtual void output(){   // now when i try to look at this function or call this function the compiler will look if we have another definition of function which is not virtual  
        cout<<"Base class fn"<<endl;
    }
    //virtual void output(); or virtual void output()=0; --> pure virtually function  the function have to find another copy 
};

class Derived : public Base{
    public:
    int c,d;
    Derived(){
        c=0;d=0;
    }
    void output() {
        cout<<"Derived class fn"<<endl;
    }
    void printVal(void){
    }
     
};
class Newclass : public Base{
    public:
    void output(){
        cout<<"New class fn"<<endl;
    }
};

int main() {
    
    Derived d;
    Base *b = &d;
    b->output();//this is called function overridding
    Newclass x;
    b=&x;
    b->output();
    return 0;
    //problem is pointer itself is of base class so how can it access derived class
}


/**
 * Runtime polymorphism is the ability of a program to resolve function calls at runtime using method overriding and virtual functions, allowing a base class pointer/reference to invoke derived class methods dynamically.
 */