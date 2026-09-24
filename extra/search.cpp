#include <iostream>
using namespace std;
int main (){
   int size;
   cout<<"Enter the number of elements in the array: ";
   cin>>size;
   float array[size];
   cout<<"\nEnter the elements of the array: "<<endl;
   for ( int i=0;i<size;i++)
   {
    cin>>array[i];
   }
   int target;
    cout<<"Enter the target value to search: ";
    cin>>target;
    for (int i=0; i<size;i++)
    { 
        if (array[i] == target)
        {
            cout<<"\nElement found at index: "<<i;
            return 0;
        }
    }
    cout<<"\nElement not found in the array.";
    return 0;
}
