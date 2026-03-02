//Static Function Member

#include <iostream>
using namespace std;
class Rectangle
{
private:
    int l;
    int b;
    int A;

public:
    static int count;// object of class Rectangle 
    static int howMuchMemory(){
        return (count*12+4); //memory taken by object of class Rectangle by total member
    }
    Rectangle(){
    l=0;b=0;A=0;
    count++;
    }
    void putVal(int le, int br){
        l=le;b=br;
        A=le*br;
    }

};
int Rectangle::count =0;



int main() {
    Rectangle a,b,c,d,e;
    cout<<Rectangle::count <<endl;
    cout<<Rectangle::howMuchMemory() <<endl;
    return 0;
}
/**
 * Note :  We can't use non static member inside static function
 * return(count*length) is invalid
 */

 