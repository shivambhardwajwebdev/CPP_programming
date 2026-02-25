#include<iostream>
using namespace std;
int main(){
    int num1=0;
    for(int i=1;i<=500;i++){
        for(int j=1;j<i;j++){
            if (i%j==0){
                num1+=j;
            }
        }if(i==num1){
                cout<<i<<" ";
               
        } num1=0;
    }
}