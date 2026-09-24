#include <bits/stdc++.h>
using namespace std;
// using template
//template is a feature by which we can write generic code for different data type
template <class T>
    void linearSearch(T array[] , T size, T target){
        bool found;
        for (int i=0; i<size;i++){
        if (array[i] == target){
            cout<<"\nElement found at index: "<<i;
            found=1;
        }
    }
        if(found==0)
        {
        cout<<"\nElement not found in the array.";
        }
    };

int main(){
    int size;
    cout<<"Enter the size of the array:"<<endl;
    cin>>size;
    int array[size];
    cout<<"\nEnter the elements of array:"<<endl;
    for(int i=0;i<size;i++){
        cin>>array[i];
    }
    int target;
    cout<<"\nEnter the target value to search:"<<endl;
    cin>>target;
    linearSearch(array,size,target);
    return 0;
}