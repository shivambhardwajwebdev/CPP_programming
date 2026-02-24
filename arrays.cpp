#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the length of the array : ";
    cin>>n;
    int array[n];
    for(int i=0;i<n;i++){
        int val;
        cout<<"Enter the "<<i+1<<" element : ";
        cin>>val;
        array[i]=val;
    }
    cout << "Your Array is Saved"<<endl;
    for(int i=0;i<n;i++){
        int val=array[i];
        cout<<"The value of "<<i+1<<" element : "<<val<<endl;
    }
    

}