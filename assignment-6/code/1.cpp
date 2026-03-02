#include <iostream>
using namespace std;
int sum(int ,int);
double sum(double,double);
int sum(int ,int ,int );

int main() {
    cout<<sum(5,5)<<endl;
    cout<<sum(3.5,5.3)<<endl;
    cout<<sum(1,2,3)<<endl;
    return 0;
}
int sum(int a,int b){
    cout<<"Sum of two integers : ";
    return a+b;
    
}
double sum(double a,double b){
    cout<<"Sum of two doubles : ";
    return a+b; 
}
int sum(int a,int b,int c){
    cout<<"Sum of three integers : ";
    return a+b+c;
}