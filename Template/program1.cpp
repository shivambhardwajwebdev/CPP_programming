//template for functions
#include <iostream>
using namespace std;
// template <class T>
template <class T, class S>
//greatest Number among two and more datatypes
// T greatestNum(T a, T b, T c){
//     if(a>b){
//         if(a>c){
//             return a;
//         }else{
//             return c;
//         }
//     }else{
//         if(b>c){
//             return b;
//         }else{
//             return c;
//         }
//     }
// }

// int main() {
// int a=2,b=3,c=12;
// cout<< greatestNum<int>(a,b,c)<<endl;
// float x=1.1,y=2.11,z=2.01;
// cout<<greatestNum<float>(x,y,z);
// return 0;
// }


// add two numbers :
T add ( T a, S b){
    return a+b;
}
int main(){
    int a=5 ,b=5;
    cout<<add<int,int>(a,b)<<endl;
    cout<<add<float,int>(1.2,b)<<endl;

}

//how do we make one float int another int interger types we have to 
//use 2 classes for that