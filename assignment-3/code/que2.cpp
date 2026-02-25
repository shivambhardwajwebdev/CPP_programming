#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;
    cout<<"Enter the String : ";
    cin>>response;
    char c;
    cout<<"Enter the Character : ";
    cin>>c;
    int pos;
    bool found=false;
    int length =response.length();
    for(int i=0;i<length;i++){
        if(response[i]==c){
            pos=i;
            cout<<c<<" is found in "<<response<<" at "<<pos<<endl;
            found=true;
        }
    }
    if(found==false){
        cout<<c<<" is not found in "<<response<<endl;
    }
}