// Write a C++ program to calculate the area of a rectangle and a triangle by using an abstract class.
// An abstract class contains at least one pure virtual function and cannot be instantiated.
#include<iostream>
using namespace std;
class Shape{
    public:
    int length , breadth , base ,height , area;
    virtual int Area()=0;
};
class Rectangle : public Shape{
    public:
    Rectangle(){
        length=0;breadth=0;
    }
    Rectangle(int l,int b){
        length=l;breadth=b;
    }
    int Area(){
        area = length* breadth;
        cout<<"Area of Rectangle = "<<area;
    }
};
class Triangle : public Shape{
    public:
    Triangle(){
        height=0;base=0;
    }
    Triangle(int l,int b){
        height=l;base=b;
    }
    int Area(){
        area = height*base;
        cout<<"Area of Triangle = "<<area/2;
    }
};
int main(){
    {cout<<"Enter the length and breadth of Rectangle : "<<endl;
    Rectangle para;
    cin>>para.length>>para.breadth;
    para.Area();
    cout<<endl;}
    {cout<<"Enter the height and breadth of Triangle : "<<endl;
    Triangle para;
    cin>>para.height>>para.base;
    para.Area();
    return 0;}

}