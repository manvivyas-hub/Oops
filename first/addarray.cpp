#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows: ";
    cin >> rows;

    cout << "Enter number of columns: ";
    cin >> cols;

    float A[rows][cols];
    float B[rows][cols];
    float Sum[rows][cols];

    cout << "\nEnter elements of first array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> A[i][j];
        }
    }

    cout << "\nEnter elements of second array:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cin >> B[i][j];
        }
    }

    // Add the arrays
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }

    cout << "\nSum of the two arrays:\n";
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << Sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}