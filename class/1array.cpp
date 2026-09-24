#include <iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of array:";
    cin>>size;
    int *arr=new int[size];
    cout<<"\n Enter the elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"\nPrinting array in forward direction:"<<endl;
    for(int i=0 ; i<size; i++){
        cout<<arr[i]<<" " ;
    }
    cout<<"\nPrinting array in reverse direction:"<<endl;
    for(int i=size-1; i>-1; i--){
        cout<<arr[i]<<" " ;
    }
    return 0;
}