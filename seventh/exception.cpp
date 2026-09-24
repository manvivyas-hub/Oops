#include <iostream>
using namespace std;
template <class T>
    T divide(T numerator ,T denominator){
     if(denominator==0){
        throw "Divison by zero is not allowed.";
     }
     T division=(numerator)/(denominator);
     return division;
    };
int main(){
    float num;
    float  den;
    cout<<"\nEnter numerator:";
    cin>>num;
    cout<<"\nEnter denominator:";
    cin>>den;
    try {
        float result=divide(num,den);
        cout<<"Result:"<<result<<endl;
    }
    catch(const char* message){
        cout<<"Exception:"<<message<<endl;
    }
    return 0;
}