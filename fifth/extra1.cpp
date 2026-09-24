#include <iostream>
using namespace std;
class Complex{
    int real;
    int imaginary;
    public:
    void getdata(){
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imaginary;
    }
    void putdata(){
        if (imaginary>=0){
        cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        else{
            cout<<real<<imaginary<<"i"<<endl;
        }
    }
    void display(){
         if (imaginary>=0){
        cout<<"The entered number is:"<<real<<"+"<<imaginary<<"i"<<endl;
        }
        else{
            cout<<"The entered number is:"<<real<<imaginary<<"i"<<endl;
        }
    }
    Complex operator-(Complex C){
        Complex temp;
        temp.real=real-C.real;
        temp.imaginary=imaginary-C.imaginary;
        return temp;
    }
};
int main(){
    Complex A,B,result;
    A.getdata();
    A.display();
    B.getdata();
    B.display();
    cout<<"The difference of the two complex numbers is:";
    result=A-B;
    result.putdata();
    return 0;
}