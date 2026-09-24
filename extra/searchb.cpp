#include <iostream>
using namespace std;
int main (){
    int size;
    cout<<"Enter the number of elements in the array: ";
    cin>>size;
    float array[size];
    cout<<"Enter the elements of the array: "<<endl;
    for ( int i=0;i<size;i++)
    {
        cin>>array[i];
    }
    for (int i=0;i<size;i++)
    {
        for (int j=0; j<size-i;j++)
        {
            if (array[j-1]>array[j])
            {
                float temp= array[j-1];
                array[j-1]=array[j];
                array[j]=temp;
            }
        }
    }
    cout<<"The sorted array is: "<<endl;
    for (int i=0;i<size;i++)   
    {
        cout<<array[i]<<" ";
    }
    float target;
    cout<<"\nEnter the target value to search: ";
    cin>>target;
    int begin=0;
    int end=size-1;
    int mid;
    while (begin <= end)
    { 
        mid=(begin+end)/2;

        if (array[mid]>target)
        {
             end=mid-1;
        }
        else if (array[mid]<target)
        {
            begin=mid+1;
        }
        else
        {
         cout<<"Element found at index: "<<mid<<endl;
        return 0;
    }
    }

    cout<<"Element not found in the array."<<endl;
    return 0;
}