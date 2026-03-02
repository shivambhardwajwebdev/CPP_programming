// Friend function and classes 
#include <iostream>
using namespace std;
class B;// b has to be defined to use it in as friend of B before writing friend B
class A{
    private:
    int gamma;
    public:
    int x,y;
    friend B; // it not make the two classes to be friend to each other 
    //it means class B become friend of A 
};
class B{ //has-a relationship
    public :
    A e; //object of class A
    void checkingVal(){
        cout<<"Derived class fn"<<endl;
        e.x=0;
        e.y =1;
        e.gamma =11; //we can't access private element
        cout<<e.x<<" "<<e.y<<" "<<e.gamma << endl;

    }

};

int main() {
    B obj;
    obj.checkingVal();

    return 0;
}