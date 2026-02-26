#include<iostream>
using namespace std;
struct student {
    int id;
    string name;
    int age;
    char grade;
};
int main (){
    int n;
    cout<<"Enter the number of students : ";
    cin>>n;
    student record[n];
    for(int i=0;i<n;i++){
        cout<<"For student "<<i+1<<endl;
        record[i].id=i+1;
        cout<<"Enter name : ";
        cin>>record[i].name;
         cout<<"Enter Age : ";
        cin>>record[i].age;
         cout<<"Enter Grade : ";
        cin>>record[i].grade;

    }
    for(int i=0;i<n;i++){
        cout<< "For Student "<<record[i].id<<endl<<"Name : "<<record[i].name<<endl<<"Age : "<<record[i].age<<endl<<"Grade : "<<record[i].grade<<endl;
    }
}