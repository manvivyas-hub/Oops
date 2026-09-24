#include <iostream>
using namespace std;
class Base{
    protected:
    int roll_number=72;
    string name="Manvi";
    public:
    void getdata(){
        cout<<"Enter the roll number:";
        cin>>roll_number;
        cout<<"Enter Name:";
        cin>>name;
    };
    void putdata(){
        cout<<"The entered name is:"<<name;
        cout<<"The roll number is:"<<roll_number;
    };
};