//GCD -Greatest Common Factor
#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first Number : ";
    cin>>a;
    cout<<"Enter the second Number : ";
    cin>>b;
    int min;
    int max;
    (a>b)?min=a:min=b;
    for (int i=1;i<=min;i++){
        if(b%i==0){
            max=i;
        }
    }
    cout<<max;

}