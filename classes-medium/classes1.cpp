#include<iostream>
using namespace std;
class ComplexNumbers{ //constructors , destructors , mutators , accessors , enquiry , facilitators
    private :
    int real;
    int imag;
    public:
    //constructors begin
    ComplexNumbers(void){
        real=0;
        imag=0;
    }
    ComplexNumbers(int x,int y){
        real=x;
        imag=y;
    }
    ComplexNumbers(const ComplexNumbers& z){
        real = z.real;
        imag=z.imag;
    }
    //constructors end

    //mutators begin
    inline void setValues(int , int );//almost forces inline
    // function wheather declared anywhere but sometimes got rejected this inline keywors
    //enquiry
    bool isReal(void);
    //facilitators
    ComplexNumbers findProduct(ComplexNumbers);


    void display(void); //accessors begin
};

int main(){
    ComplexNumbers a,b,c;
    a.setValues(1,2);//1+2i
    ComplexNumbers *e;
    e=&a;
    e->display();//pointer to object in c++;

    b.setValues(3,4);
    a.display();
    b.display();
    c=a.findProduct(b);//a is calling the function and b is passes as argument
    c.display();
    cout<<c.isReal()<<endl;



}
void ComplexNumbers::display(void){
    cout<<real<<" + "<<imag<<"i"<<endl;
}
void ComplexNumbers::setValues(int x,int y){
    real=x;imag=y;
}
bool ComplexNumbers::isReal(void){
    if(imag==0){
        return true;
    }else{
        return false;
    }
}
ComplexNumbers ComplexNumbers::findProduct(ComplexNumbers  x){
    ComplexNumbers z;
    z.real =real*x.real -imag*x.imag;
    z.imag =imag*x.real + real*x.imag;
    return z;

};
//line functions
//execution line by line 
//jumping japak jumping jumping
//if define function inside a class it is inline function and it defined outside the class using :: it is noninline function
