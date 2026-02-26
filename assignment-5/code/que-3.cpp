
#include<iostream>
using namespace std;
class findFactorial{
    private:
    int a;
    int b; 

    public:
    findFactorial(){
        a=0;b=1;
    };

    int Factorial(int a){
        int fact=1;
        cout<<"Factorial : ";
    for(int i=1;i<=a;i++){
        fact*=i;
    }
    return fact;

};
};
int main(){
    int number;
    findFactorial x;
    cout<<"Please enter the Number : ";cin>>number;
    cout<<x.Factorial(number);
}