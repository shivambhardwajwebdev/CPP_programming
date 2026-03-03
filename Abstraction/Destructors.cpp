//Destructors in c++
//Destructors is called when object needs to be deletes
#include <iostream>
using namespace std;

class Base{
    // private :
    // int*p;
    public :
    Base(){ //constructor of class A
        // p=new int[a]; 
        cout<<"'Base' class constructor is called"<<endl;
    }
    virtual~Base(/**choice to remain default only */){//~ tell the compiler that this is a destructor function and not a constructor one
        cout<<"'Base' class destructor is called"<<endl;

    }
};
class Derived : public Base{
    public :
    Derived(){ //constructor of class A
        // p=new int[a]; 
        cout<<"'Derived' class constructor is called"<<endl;
    }
    ~Derived(/**choice to remain default only */){//~ tell the compiler that this is a destructor function and not a constructor one
        cout<<"'Derived' class destructor is called"<<endl;

    }
};
int main() {
    Base *b;
    Derived e;
    b=&e;
    return 0;
}

// int main() {
//     Base x;
//     cout<<"done with base x declaration";
//     Derived y;
//     cout<<"done with derived y declaration";
//     return 0;
// }
//output
// 'Base' class constructor is called
// done with base x declaration
// 'Base' class constructor is called
// 'Derived' class constructor is called
// done with derived y declaration
// 'Derived' class destructor is called
// 'Base' class destructor is called
// 'Base' class destructor is called
//destructor is called when class stack is empty or in the end of main as we used the object in main  
//destructor are can't be overloaded as no option then default argument
//whenever 
// in constructor first base class constructor is run then derived class constructor is run 
// in destructor first derived class constructor is run then base class destructor is called