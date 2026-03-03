#include <iostream>
using namespace std;
int main() {
    int a,b;
    cout<<"Enter Numerator : ";cin>>a;
    cout<<"Enter Denomenator : ";cin>>b;
    try{
        if (b==0){
            throw 1;
        }
        cout<<a<<" divided by "<<b<<" is "<<(float)a/b<<endl;
    }catch(int e){
        cout<<"Division by Zero is not possible"<<endl;
    }
    return 0;
}