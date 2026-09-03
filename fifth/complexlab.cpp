/*include<iostream>
using namespace std;
class Complex{
    public:
    float real;
    float imaginary;
    void getdata(){
        cout<<"Enter real part:";
        cin>>real;
        cout<<"Enter imaginary part:";
        cin>>imaginary;
    };
    void putdata(){
        if (imaginary>=0){
        cout<<"The complex number is:"<<real<<"+"<<imaginary<<"i"<<endl;}
        else{
            cout<<"The complex number is:"<<real<<imaginary<<"i"<<endl;
        }
    };
};

int main(){
    Complex A,B,C;
    A.getdata();
    B.getdata();
    C.real=A.real+B.real;
    C.imaginary=A.imaginary+B.imaginary;
    C.putdata();
    return 0;
}
*/

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
     Complex operator+(Complex C){
        Complex temp;
        temp.real=real+C.real;
        temp.imaginary=imaginary+C.imaginary;
        return temp;
    }
};
int main(){
    Complex A,B,result;
    A.getdata();
    A.display();
    B.getdata();
    B.display();
    cout<<"The sum of the two complex numbers is:";
    result=A+B;
    result.putdata();
    cout<<"The difference of the two complex numbers is:";
    result=A-B;
    result.putdata();
    return 0;
}