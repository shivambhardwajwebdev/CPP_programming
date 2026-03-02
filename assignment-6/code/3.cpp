#include <iostream>
using namespace std;
class A{
    private: int a; int b;
    public :
    A(int x,int y){
        a=x;b=y;
    } 
    void multiply(){
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    }
    void multiply(int x){
        a=x;
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    }
    void multiply(int x ,int y){
        a=x;b=y;
        cout<<a<<"*"<<b<<"="<<a*b<<endl;
    }
};

int main() {
     A c(2,3);
     c.multiply();
     c.multiply(5);
     c.multiply(4,5);
    return 0;
}