#include<iostream>
using namespace std;
class reverseNo{
    private:
    int a;
    int b; 

    public:
    reverseNo(){
        a=0;
    };

    int reverse(int a){
        int rem=0;
        cout<<"Reverse : ";
    while(a/10!=0){
        rem=a%10;
        cout<<rem;
        a=a/10;
    }
    rem=a%10;
    return rem;

};
};
int main(){
    int number;
    reverseNo x;
    cout<<"Please enter the Number : ";cin>>number;
    cout<<x.reverse(number);
}