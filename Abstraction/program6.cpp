//Nexted Classes
#include<iostream>
using namespace std;
// class B;
class A{ //has-a relationship
    public:
        class B{
    public:
    int e,f;
    void testTwo(){
        // cout<<e<<f<<a<<b; inner class could not access the member of outer class which are not static
        cout<<e<<f<<z;//valid
    }
};
    // class B;
    int a,b;
    static int z;
    B c;
    B x;
};
// B --> B is undefined for outer section
// class B{
//     public:
//     int e,f;
// };

//outer class can access only public element of inner class
//inner class can access only static member of outer class
//used when there is no existance/meaning of class B out side of class A
//link list,node
