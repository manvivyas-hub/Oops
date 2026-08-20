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
    friend void display(){

    }
    friend void concatenate(){

    }
};
void display(const Concatenate &obj){
        cout<<"1st string is"<<" " <<obj.one;
        cout<<"\n2nd string is"<<" "<<obj.two;
    }
    void concatenate(const Concatenate &obj){
        cout<<"\nConcatenating the two strings\n"<<obj.one+obj.two;
    }
int main (){
    Concatenate C;
    C.getdata();
    display(C);
    concatenate(C);
    return 0;
}