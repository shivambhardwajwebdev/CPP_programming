#include<iostream>
using namespace std;
int main(){int r,c;
    cout<<"enter the rows and column in array : ";
    cin>>r>>c;
    int arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int val;
            cout<<"Enter the value of arr[" <<i<<"]["<<j<<"] element : ";
            cin>>val;
            arr[i][j]=val;
        }
    }
    cout<<"Your Array is saved !"<<endl;
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int val =arr[i][j];
            cout<<val<<"\t";
            
        }cout<<endl;
    }
    int arr2[c][r];
    //transpose of a matrix;
        for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            int val=arr[i][j];
            arr2[j][i]=val;
        }
    }
    cout<<"The transpose of your array is : "<<endl;
        for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            int val =arr2[i][j];
            cout<<val<<"\t";
            
        }cout<<endl;
    }
    //multiplication of 2 matrices
    int arr3[r][r];
    cout<<"THe multiplication matrix of your matrix and its transpose matrix is "<<endl;
        for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
            arr3[i][j]=0;
        for(int k=0;k<c;k++){
            arr3[i][j]+=arr[i][k]*arr2[k][i];
        }
            
        }}
        for(int i=0;i<r;i++){
        for(int j=0;j<r;j++){
        int val=arr3[i][j];
        cout<<val<<"\t"; 
        }cout<<endl;
    }

}