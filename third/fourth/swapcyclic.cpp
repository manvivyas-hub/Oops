#include <iostream>
using namespace std;
void cyclicswap(float &a , float&b , float &c){
    float temp=a;
    a=b;
    b=c;
    c=temp;
}
int main(){
    float a,b,c;
    cout<<"Enter three numbers: ";
    cin>>a>>b>>c;
    cyclicswap(a,b,c);
    cout<<"After cyclic swapping: "<< "a="<<a<<" b="<<b<<" c="<<c;
    return 0;
}