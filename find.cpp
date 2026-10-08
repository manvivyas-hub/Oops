#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int size;
    cout<<"Enter the number of elements:";
    cin>>size;
    vector <float> v(size);
    cout<<"Enter the elements:"<<endl;
    for(int i=0;i<size;i++){
        cin>>v[i];
    }
    //displaying the elements
    cout<<"The entered elements are:"<<endl;
    for(float x:v){
        cout<<x<<" ";
    }
    float target;
    cout<<"\nEnter the element to find:"<<endl;
    cin>>target;
    auto it=find(v.begin(), v.end(), target);
    if (it!=v.end()){
        cout<<"Element found at "<<distance(v.begin(),it)<<" index";
    }
    else {
        cout<<"Element is not found";
    }
    return 0;
}