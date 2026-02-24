#include<iostream>
using namespace std;
int main(){
    int operation;
    cout<<"Please Choose the Operation"<<endl;
    cout<<"1.Addition (+)"<<endl
        <<"2.Subtraction (-)"<<endl
        <<"3.Division (/)"<<endl
        <<"4.Multiplication (*)"<<endl
        <<"5.Exit"<<endl;
    cout<<"Enter the Serial No of the Operation : ";
    cin>>operation;
    while(operation != 5){
        int a ,b;
        cout<<"Please enter the first Number : ";
        cin>>a;
        cout<<"Please enter the second Number : ";
        cin>>b;
        switch (operation){
            case 1:
                cout<<a<<" + "<<b<<" = "<<a+b<<endl;
                break;
            case 2:
                cout<<a<<" - "<<b<<" = "<<a-b<<endl;
                break;
            case 3:
                if(b!=0)
                    cout<<a<<" / "<<b<<" = "<<(float)a/b<<endl;
                else
                    cout<<"Can't divide a number with Zero"<<endl;
                break;
            case 4:
                cout<<a<<" * "<<b<<" = "<<a*b<<endl;
                break;
            default:
                cout<<"Please choose a valid operation"<<endl;
        }
        cout<<"\nEnter the Serial No of next operation : ";
        cin>>operation;
    }
    cout<<"Thanks for using"<<endl;
    return 0;
}
