#include <iostream>
#include <fstream>
using namespace std;
int main()
{// opening the files by using ifstream
    ifstream file1("source1.txt");
    ifstream file2("source2.txt");
//we use ofstream when we want to write data into a file
    ofstream target("target.txt");
//declared two variables
// a will hold the current number of source file 1
// b will hold the current number of source file 2
    int a, b;
//file1>>a means read a number from file 1
//file1>>b means read a number from file 2
//we used the following condition so that we can know when the number of elements get finished
    bool hasA = bool(file1 >> a);
    bool hasB = bool(file2 >> b);
//keep comparing numbers as long as both files still have numbers
    while (hasA && hasB)
    {
        if (a <= b)
        {
            target << a << " ";
            hasA = bool(file1 >> a);
        }
        else
        {
            target << b << " ";
            hasB = bool(file2 >> b);
        }
    }
    while (hasA)
    {
        target << a << " ";
        hasA = bool(file1 >> a);
    }
    while (hasB)
    {
        target << b << " ";
        hasB = bool(file2 >> b);
    }
    file1.close();
    file2.close();
    target.close();
    cout << "Files merged successfully." << endl;
    return 0;
}