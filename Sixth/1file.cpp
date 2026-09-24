#include <iostream>
//fstream used for working with files
#include <fstream>
using namespace std;
// this function checks whether the numbers in source file are sorted or not
//ifstream represents a file that we are reading
//The & means we are passing the actual file stream to the function rather than making a separate copy.
bool isSorted(ifstream &file)
{
    // we created two variables
    // previous stores the previous number and current stores the current number
    int previous, current;
    // Read the first number
    if (!(file >> previous))
    // if reading the first number was unsuccesful return true
        return true;
    //The function considers an empty file (or a file with no readable integer) as sorted.

    // Compare each number with the previous number
    while (file >> current)
    {
        if (current < previous)
            return false;
            // list could be sorted

        previous = current;
    }
    return true;
    //If the entire file has been checked and we never found a number smaller than the previous number, then the list is sorted.
}

int main()
{// open the two files for reading
    ifstream source1("source1.txt");
    ifstream source2("source2.txt");
// checks whether both the files can get opened
    if (!source1 || !source2)
    {
        cout << "Error opening file." << endl;
        return 0;
    }
    if (isSorted(source1))
        cout << "Source 1 contains a sorted list." << endl;
    else
        cout << "Source 1 does not contain a sorted list." << endl;

    if (isSorted(source2))
        cout << "Source 2 contains a sorted list." << endl;
    else
        cout << "Source 2 does not contain a sorted list." << endl;
    source1.close();
    source2.close();
    return 0;
}