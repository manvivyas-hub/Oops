#include <iostream>
using namespace std;
int main (){
   int n;
   cout<<"Enter the number of elements in the array: ";
   cin>>n;
   float array[n];
   cout<<"Enter the elements of the array: "<<endl;
   for ( int i=0;i<n;i++)
   {
    cin>>array[i];
   }
   int target;
    cout<<"Enter the target value to search: ";
    cin>>target;
    for (int i=0; i<n;i++)
    { 
        if (array[i] == target)
        {
            cout<<"Element found at index: "<<i<<endl;
            return 0;
        }
    }
    cout<<"Element not found in the array."<<endl;
    return 0;
}
