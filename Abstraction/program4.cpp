//static member
#include <iostream>
using namespace std;
class Rectangle{
    private :
    int length;
    int breadth;
    int area;
    public:
    static int  count;// memorise the previous value in entire program 
    static int memo;
    Rectangle(){
        length=0;
        breadth=0;
        area=0;
        count++;
        memo +=12;
        
    }
    void putVal(int l,int b){
        length=l;breadth=b;
        area =l*b;
    }
    void displayVal(){
        cout<<length<<" "<<breadth<<endl;
    }
};
int Rectangle::count=0; // int datatype to access int datatype variable count
int Rectangle::memo =0; 
int main() {
    // Rectangle a,b,c;
    // cout <<a.count<<endl;
    cout<<Rectangle::count<<endl;//show how many object is created
  cout<<Rectangle::memo<<endl;//show how many memory private member is take

    return 0;
}
//static member can use directly with class Name and scope resolution operator