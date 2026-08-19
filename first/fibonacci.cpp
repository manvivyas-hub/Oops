#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of terms in Fibonacci series:"<<endl;
    cin>>n;
    int a=0;
    int b=1;
    cout<<"Fibonacci series:"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<a<<" ";
        int c=a+b;
        a=b;
        b=c;
    }
    return 0;
}