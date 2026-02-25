#include<iostream>
using namespace std;
int main(){
    int arr[10]={10,9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    int no=0;
    for(int j=0;j<n-1;j++){
    for(int i=j;i<n-1;i++){
        if(arr[i+1]>arr[i]){
            int temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
            no++;

        }
    
    }int temp;temp=arr[j];
    arr[j]=arr[n-1];
    arr[n-1]=temp;
    no++;
}

for(int i=0;i<n;i++){
    cout<<arr[i]<<"\t";
}
cout<<endl<<no;
}