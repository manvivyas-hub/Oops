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
    // this is for postfix as we have given a parameter
     void operator++(int)
    {
        num++;
    }
    void operator--(int)
    {
        num--;
    }
    // this is for prefix as there is no parameter given
    void operator++()
    {
        ++num;
    }
    void operator--()
    {
        --num;
    }
};
int main(){
    Number N;
    N.getdata();
    // Postfix increment
    N++;
    N.putdatai();
    // Prefix increment
    ++N;
    N.putdatai();
    // Postfix decrement
    N--;
    N.putdatad();
    // Prefix decrement
    --N;
    N.putdatad();
    return 0;
}
/*operators which cannot get overloaded are
1)SCOPE RESOULTION OPERATOR ::
2) SIZE OF OPERATOR (sizeof)
3)CLASS OBJECT OPERATOR .
4)CONDITIONAL OPERATOR ?:*/