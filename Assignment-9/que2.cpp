#include <iostream>
#include<limits>
using namespace std;
int main() {
    int num; char c;
    try{
        cout << "Enter a integer : ";
        cin>>num;
        //cin fails if num is not an integer
        if(cin.fail()){
            throw 1;
        }
        cout<<"You entered : "<<num<<endl;
    }catch(int e){
        cout<<"You entered a non valid integer"<<endl;
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    try{
        cout<<"Enter a character : ";
        cin>>c;
        if(cin.fail()||(!isalpha(c))){
            throw 2;
        }
        cout<<"You entered : "<<c<<endl;
    }catch(int e){
        cout<<"You entered a non valid character";
    }
    
    return 0;
}
