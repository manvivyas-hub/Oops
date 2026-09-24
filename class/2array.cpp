#include <iostream>
using namespace std;
int main (){
    const int size=5;
    double arr[size];
    cout<<"Enter "<<size<<" numbers:"<<endl;
    for(int i=0; i<size;i++){
        cin>>arr[i];
    }
    cout<<"\nIn reverse order:"<<endl;
    for(int i=size-1;i>-1;i--){
        cout<<arr[i]<<" ";
    }
    return 0;
}