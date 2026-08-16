#include <iostream>
using namespace std;
int main (){
    int n;
    float sum=0;
    cout<<"Enter number of elements:";
    cin>>n;
    cout<<"Enter the elements:"<<endl;
    float a[n];
    for (int i=0; i<n ; i++)
    { cin>>a[i];
     sum=sum+a[i];}
    float average=  float(sum)/n;
    cout<<"Average is:"<<average;
    return 0;
}