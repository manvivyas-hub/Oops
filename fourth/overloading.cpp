#include<iostream>
using namespace std;
float area(float radius){
    return 3.14*radius*radius;
}
float area( float length, float breadth){
    return length*breadth;
}
float area(float base, float height, float factor){
    return factor*base*height;
}
int main(){
    float radius,length,breadth,base,height;
    cout<<"Enter radius of circle: ";   
    cin>>radius;
    cout<<"\nArea of circle is: "<<area(radius);    
    cout<<"\nEnter length and breadth of rectangle: ";
    cin>>length>>breadth;
    cout<<"\nArea of rectangle is: "<<area(length,breadth);
    cout<<"\nEnter base and height of triangle: ";
    cin>>base>>height;
    cout<<"\nArea of triangle is: "<<area(0.5,base,height);
    return 0;
}