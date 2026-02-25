#include<iostream>
using namespace std;
int main(){
    char name[10]="shivam";
    
    int length =sizeof(name)/sizeof(name[0]);
    cout<<length;
    int pos;
    char c;
    cout<<"Enter the character : ";
    cin>>c;
    cout<<"At which position you want to insert new character : ";
    cin>>pos;
    for (int i=length-2;i>=pos;i--){
        name[i+1]=name[i];

    }
    name[pos]=c;
    for(int i=0;i<=length;i++){
        cout<<name[i]<<endl;
    }

}