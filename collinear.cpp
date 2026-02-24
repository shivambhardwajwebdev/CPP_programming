#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int x1,x2,x3,y1,y2,y3;
    cout<<"enter the coordinates of 1st point : "<<endl;
    cin>>x1>>y1;
    cout<<"enter the coordinates of 2nd point : "<<endl;
    cin>> x2>>y2;
    cout<<"enter the coordinates of 3rd point : "<<endl;
    cin>> x3>>y3;
    float a,b,c;
    a=sqrt((x2-x1)*(x2-x1) +(y2-y1)*(y2-y1));
    b=sqrt((x3-x2)*(x3-x2) +(y3-y2)*(y3-y2));
    c=sqrt((x3-x1)*(x3-x1) +(y3-y1)*(y3-y1));
    float s=a+b+c/2.0;
    float Area=sqrt(s*(s-a)*(s-b)*(s-c));
    if(Area==0.001){
        cout<<"Since the area of these point is : "<<Area<<" these points are collinear"<<endl;
    }else{
        cout<<"Since the area of these point is : "<<Area<<" these points are not collinear"<<endl;
    }
    


}