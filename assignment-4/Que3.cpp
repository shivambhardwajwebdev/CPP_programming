#include<iostream>
using namespace std;
int max_two(int a,int b){
    int max;
    (a>b)?max= a:max= b;
    return max;
}
int main(){
    int x,y;
    cout<<"Enter the first Number : ";
    cin>>x;
    cout<<"Enter the second Number : ";
    cin>>y;
    cout<<"The maximum of two numbers is : "<<max_two(x,y)<<endl;
}