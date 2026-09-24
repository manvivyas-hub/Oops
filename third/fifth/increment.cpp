#include<iostream>
using namespace std;
class Number{
    public:
    int num;
    void getdata(){
        cout<<"Enter the number:";
        cin>>num;
    }
    void putdatai(){
        cout<<"The number after increment:"<<num<<endl;
    }
    void putdatad(){
        cout<<"The number after decrement:"<<num<<endl;
    }
    void operator++()
    {
        num++;
    }
    void operator--()
    {
        num--;
    }
};
int main(){
    Number A;
    A.getdata();
    cout<<"The number is:"<<A.num<<endl;
    ++A;
    A.putdatai();
    --A;
    A.putdatad();
    return 0;
}