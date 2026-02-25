#include<iostream>
using namespace std;
struct complex_no{
    int real;
    int imag;
};
complex_no addComplexNo(complex_no a,complex_no b){
    complex_no c;
    c.real=a.real+b.real;
    c.imag=a.imag+b.imag;
    return c;

};
int main(){
    complex_no a,b;
    a.real=3;a.imag=4;
    b.real=4;b.imag=6;
    complex_no g =addComplexNo(a,b);
    cout<<g.real<<"\t"<<g.imag<<endl;

}