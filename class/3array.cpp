#include<iostream>
using namespace std;
int main(){
    float arr[]={1.5,2.4,2.6,24,26};
    int size= sizeof(arr)/sizeof(float);
    for(int i=0;i<size;i++){
        cout<<"\t a["<<i<<"]="<<arr[i]<<endl;
    }
    return 0;
}