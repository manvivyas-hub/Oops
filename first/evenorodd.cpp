#include <iostream>
using namespace std;
int main(){
   int x;
    cout<<"Enter a positive number:"<<endl;
    cin>>x;
    while (x<=0)
    {
        cout<<"Please enter a positive number:"<<endl;
        cin>>x;
    }
    if (x&1)
    {
        cout<<x<<" is an odd number."<<endl;
    }
    else
    {
        cout<<x<<" is an even number."<<endl;
    }
    return 0;
}