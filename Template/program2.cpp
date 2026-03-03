//Template in classes
#include<iostream>
using namespace std;
template <class T>
class Matrix {
    public :
    T mtr[50][50];

};
int main(){
    Matrix<int> x;
   
    Matrix<float> y;
     y.mtr[1][1]=2.56;
    cout<<y.mtr[1][1];
    Matrix<double> z; 
    return 0;
}
