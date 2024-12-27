#include <iostream>
using namespace std;

int main()
{
    int size, row, col, sum=0;

    cout << "Enter the size : ";
    cin >> size;

    int box[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Box[" << i << "][" << j << "] = ";
            cin >> box[i][j];
        }
    }

    cout << "The Array is : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
    }


    // For Sum of Row
    cout << "Enter row number : ";
    cin >> row;

    if (row >= 0 && row < size)
    {
        cout << "Elements of Row : ";

        for (int j = 0; j < size; j++)
        {
            cout << box[row][j] << " ";
            sum += box[row][j];
        }
        cout << endl;
        cout << "The sum of Row " << row << ": " << sum << endl;
        
    }
    else 
    {
        cout << "Invalid Input !" << endl;
        cout << "Please Enter a value Beetween 0 to " << size-1 << endl;
    }

    sum = 0;

    // For sum of Column

    cout << "Enter column number : ";
    cin >> col;

    if (col >= 0 && col < size)
    {
        cout << "Elements of Column : ";

        for (int i = 0; i < size; i++)
        {
            for (int j = col; j == col; j++)
            {
                cout << box[i][col];
                sum += box[i][col];
            }
        }
        cout << endl;
        cout << "The sum of Column " << col << ": " << sum << endl;
        
    }
    else 
    {
        cout << "Invalid Input !" << endl;
        cout << "Please Enter a value Beetween 0 to " << size-1 << endl;
    }
    
   
}