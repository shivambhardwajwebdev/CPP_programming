// Not optimised loop
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={10,9,8,7,6,5,4,3,2,1};
//     int n = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<n-1;i++){
//         for(int j=0;j<n-i;j++){
//             if (arr[j]>arr[j+1]){
//                 int temp=arr[j];
//                 arr[j]=arr[j+1];
//                 arr[j+1]=temp;
//             }
//         }

//     }
//     for(int i=0;i<n;i++){
//     cout<<arr[i]<<"\t";
//     }
// }
//optimised loop 
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(arr)/sizeof(arr[0]);
    int no=0;
    for(int i=0;i<n-1;i++){
        bool flag=true;
        for(int j=0;j<n-i-1;j++){
            if (arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=false;
                no++;
            
            }
            if (flag==true)
            {no++;
                 break;
                 
            }
            no++;
        }

    }
    for(int i=0;i<n;i++){
    cout<<arr[i]<<"\t";
    }
    cout<<endl<<no;
}