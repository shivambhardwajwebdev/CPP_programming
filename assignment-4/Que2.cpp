#include <iostream>
#include <cmath>
using namespace std;
float calculator(float a, float b, int opt){
if(opt==1){
    return a+b;
}
if(opt==2){
    return a-b;
}
if(opt==3){
    return a*b;
}
if(opt==4){
    return a/b;
}
if(opt==5){
    return pow(a,b);
}
}
int main(){
    float num1, num2;
    int op;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    cout << "Enter Serial No of operator :\n1. +\n2. -\n3. *\n4. / \n5. ^ : ";
    cin >> op;
    cout<<calculator(num1,num2,op);
    return 0;
}