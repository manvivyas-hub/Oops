#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    int size;
    cout<<"Enter the number of elements:"<<endl;
    cin>>size;
    // declaring a vector 
    // syntax vector<data_type>name(size)
    vector <float> v(size);
    cout<<"Enter the elements:"<<endl;
    // using for loop to insert the elements in the vector
    for(int i=0; i<size; i++){
        cin>>v[i];
    }
    //displaying the elements 
    cout<<"The entered elements are:"<<endl;
    for(float x:v){
        cout<< x <<" ";
    }
    float target;
    cout<<"\nEnter the element of which you want to know the number of occurrences:"<<endl;
    cin>>target;
    //count returns the number of times an element occured
    int countelements =count(v.begin(), v.end(),target);
    cout<<"The number of occurence of "<<target<<" is "<<countelements;
    return 0;
}