#include<iostream>
using namespace std;
class Concatenate{
    public:
    string one;
    string two;
    void getdata(){
        cout<<"Enter 1st string:";
        cin>>one;
        cout<<"Enter 2nd string:";
        cin>>two;
    }
    void concatenate(const Concatenate &obj){
        cout<<"\nConcatenating the two strings\n"<<obj.one+obj.two;
    }
};  
int main (){
    Concatenate C;
    C.getdata();
    C.concatenate(C);
    return 0;
}