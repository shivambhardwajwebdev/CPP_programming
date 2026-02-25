#include <iostream>
using namespace std;
bool isEligible(int age){
    if(age >= 18)
        return true;
    else
        return false;
}
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(isEligible(age))
        cout << "You are eligible to vote.";
    else
        cout << "You are not eligible to vote.";
    return 0;
}