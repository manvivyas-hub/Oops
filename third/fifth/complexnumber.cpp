#include <iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imaginary;
    void getdata();
    void putdata();
    void sum(Complex A, Complex B);
};

void Complex::getdata(){
    cout<<"Enter real part:";
    cin>>real;
    cout<<"Enter imaginary part:";
    cin>>imaginary;
}

void Complex::putdata(){
    if (imaginary>=0){
    cout<<"The complex number is:"<<real<<"+"<<imaginary<<"i"<<endl;}
    else{
        cout<<"The complex number is:"<<real<<imaginary<<"i"<<endl;
    }
}

void Complex::sum(Complex A, Complex B){
    real=A.real+B.real;
    imaginary=A.imaginary+B.imaginary;
}

int main(){
    Complex X,Y,Z;
    X.getdata();
    Y.getdata();
    Z.sum(X,Y);
    Z.putdata();
    return 0;
}