#include<iostream>
using namespace std;
float area(float radius){
    return 3.14*radius*radius;
}
float area( float length, float breadth){
    return length*breadth;
}
float area(float base, float height, float extra){
    return 0.5*base*height;
}
int main(){
    float radius,length,breadth,base,height;
    cout<<"Enter radius of circle: "<<endl;   
    cin>>radius;
    cout<<"Area of circle is: "<<area(radius)<<endl;    
    cout<<"Enter length and breadth of rectangle: "<<endl;
    cin>>length>>breadth;
    cout<<"Area of rectangle is: "<<area(length,breadth)<<endl;
    cout<<"Enter base and height of triangle: "<<endl;
    cin>>base>>height;
    cout<<"Area of triangle is: "<<area(base,height,0.5)<<endl;
    return 0;
}