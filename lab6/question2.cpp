
#include <iostream>
using namespace std;

int main()
{
    int rows, cols;

    cout << "Enter number of rows (maximum 3): ";
    cin >> rows;

    cout << "Enter number of columns (maximum 3): ";
    cin >> cols;

    while (rows < 1 || rows > 3 || cols < 1 || cols > 3)
    {
        cout << "Invalid dimensions! Maximum allowed is 3 x 3." << endl;

        cout << "Enter number of rows (maximum 3): ";
        cin >> rows;

        cout << "Enter number of columns (maximum 3): ";
        cin >> cols;
    }

    double** array = new double*[rows];

    for (int i = 0; i < rows; i++)
    {
        array[i] = new double[cols];
    }

    cout << "Enter the elements of the array:" << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << "Enter element [" << i << "][" << j << "]: ";
            cin >> array[i][j];
        }
    }

    cout << "The elements of the array are " << endl;

    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << array[i][j] << "\t";
        }

        cout << endl;
    }

    for (int i = 0; i < rows; i++)
    {
        delete[] array[i];
    }

    delete[] array;

    return 0;
}
