// push_back() , pop_back , size , capacity , front , back
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int size;
    cout << "Enter the number of elements:";
    cin >> size;
    // Declaring a vector
    vector<float> v(size);
    cout << "Enter the elements:" << endl;
    for(int i = 0; i < size; i++)
    {
        cin >> v[i];
    }
    // Displaying the elements
    cout << "The entered elements are:" << endl;
    for(float x : v)
    {
        cout << x << " ";
    }
    int x;
    do
    {
        cout << "\n\nSelect 1: INSERTION  2: DELETION  3: NO CHANGE" << endl;
        cin >> x;
        switch(x)
        {
            case 1:
                float element;

                cout << "Enter the element to insert:" << endl;
                cin >> element;

                v.push_back(element);

                cout << "After push_back(): ";

                for(int i = 0; i < v.size(); i++)
                {
                    cout << v[i] << " ";
                }

                break;               
            case 2:
            
                if(v.size() > 0)
                {
                    v.pop_back();

                    cout << "After pop_back(): ";

                    for(int i = 0; i < v.size(); i++)
                    {
                        cout << v[i] << " ";
                    }
                }
                else
                {
                    cout << "Vector is empty!";
                }

                break;
            case 3:
            cout << "The elements after operation are:" << endl;
    for(float x : v)
    {
        cout << x << " ";
    }
                break;
            default:
                cout << "Invalid choice!";
        }
    } while(x != 3);
    // size() returns the number of elements
    cout << "\n\nSize of vector: " << v.size();
    // capacity() returns the total space currently allocated
    cout << "\nCapacity of vector: " << v.capacity();
    // front() returns the first element
    cout << "\nFirst element: " << v.front();
    // back() returns the last element
    cout << "\nLast element: " << v.back();
    return 0;
}
