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
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    cout<<"Multiplication of "<<a<<" and "<<b<<" is: "<<multiplication(a,b)<<endl;
    cout<<"Enter three numbers: "<<endl;
    cin>>a>>b>>c;
    cout<<"Multiplication of "<<a<<", "<<b<<" and "<<c<<" is: "<<multiplication(a,b,c)<<endl;
    cout<<"Enter four numbers: "<<endl;
    cin>>a>>b>>c>>d;
    cout<<"Multiplication of "<<a<<", "<<b<<", "<<c<<" and "<<d<<" is: "<<multiplication(a,b,c,d)<<endl;
    cout<<"Enter a number to find its cube: "<<endl;
    cin>>a;
    cout<<"Cube of "<<a<<" is: "<<cube(a)<<endl;
    return 0;
}