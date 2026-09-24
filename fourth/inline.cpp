#include<iostream>
using namespace std;
inline int multiplication(int a, int b, int c=1 , int d=1){
    return a*b*c*d;
}
inline int cube(int n){
    return n*n*n;
}
int main(){
    int a,b,c,d;
    cout<<"Enter two numbers: ";
    cin>>a>>b;
    cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<multiplication(a,b);
    cout<<"\nEnter three numbers: ";
    cin>>a>>b>>c;
    cout<<"Multiplication of "<<a<<", "<<b<<" and "<<c<<" is: "<<multiplication(a,b,c);
    cout<<"\nEnter four numbers: ";
    cin>>a>>b>>c>>d;
    cout<<"Multiplication of "<<a<<", "<<b<<", "<<c<<" and "<<d<<" is: "<<multiplication(a,b,c,d);
    cout<<"\nEnter a number to find its cube: ";
    cin>>a;
    cout<<"Cube of "<<a<<" is: "<<cube(a);
    return 0;
}