#include<iostream>
#include<string>
using namespace std;
int main(){
    string response;
    cout<<"Enter the String : ";
    cin>>response;
    int count_vowels=0;
    int count_cons =0;
    int length =response.length();
    for(int i=0;i<length;i++){
        if(response[i]=='a' || response[i]=='e' || response[i]=='i' || response[i]=='o' || response[i]=='u'){
            count_vowels+=1;
        }else if(response[i]>='a' && response[i]<='z'){
            count_cons+=1;
        }
    }
    cout<<"Number of vowels : "<<count_vowels<<endl;
    cout<<"Number of consonants : "<<count_cons<<endl;
}