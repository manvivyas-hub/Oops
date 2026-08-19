#include <iostream>
using namespace std;
int main(){
    int n;
    float largest;
    cout<<"Enter number of elements:";
    cin>>n;
    float a[n];
    cout<<"Enter the elements of array:"<<endl;
    for (int i=0; i<n;i++)
    {cin>>a[i];}
    // let 1st element be the largest 
    largest = a[0];
    for(int i=1 ; i<n ; i++)
    if (a[i]>largest)
     {largest= a[i];}
    cout << "Largest element is:"<< largest;
    return 0;
} 