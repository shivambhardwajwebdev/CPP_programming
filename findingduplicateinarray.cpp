// My method 
// #include<iostream>
// using namespace std;
// int main(){
//     int arr[]={2,3,4,5,3,7,6};
//     int dup_no = 0;
//     int length = sizeof(arr)/sizeof(arr[0]);
//     for(int i=0;i<length;i++){
//         for(int j=6;j>i;j--){ 
//             if(arr[i]==arr[j]){
//                 dup_no=arr[j];
//                 break;
//             }
//         }
//     }
//     cout<<dup_no;
// }
//another method
// #include<iostream>
// using namespace std;

// int main(){
//     int arr[]={2,3,4,5,3,7,6,5};
//     int length = sizeof(arr)/sizeof(arr[0]);

//     for(int i = 0; i < length; i++){
//         for(int j = i + 1; j < length; j++){
//             if(arr[i] == arr[j]){
//                 cout << arr[i];
                
//             }
//         }
//     }
// }
//Method-3
//visited Array
#include<iostream>
using namespace std;
int main(){
    int arr[]={1,2,4,6,8,0,4,3,8,9,9};
    int length = sizeof(arr)/sizeof(arr[0]);
    int arr2[9];
    int dup;
    for(int i=0;i<length;i++){
        if(arr2[arr[i]]!=1){
        arr2[arr[i]]=1;
        }else{
            cout<<arr[i]<<endl;
        }

    }
    
}