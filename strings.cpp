#include<iostream>
#include<cstring>
using namespace std;
int main(){
    char firstName[10],lastname[10],fullname[25];
    cout<<"enter the first name : ";
    cin>>firstName;
    cout<<"enter the second name : ";
    cin>>lastname;
    strcpy(fullname,firstName);
    strcat(fullname," ");
    strcat(fullname,lastname);
    cout<<fullname;

}