#include <iostream>
using namespace std;
int main(){
    float a,b,temp;
    cout<<"Enter first number:"<<endl;
    cin>>a; 
    cout<<"Enter second number:"<<endl;
    cin>>b;
    temp=a;
    a=b;
    b=temp;
    cout<<"After swapping:"<<endl;
    cout<<"First number: "<<a<<endl;
    cout<<"Second number: "<<b<<endl;
    return 0;
}