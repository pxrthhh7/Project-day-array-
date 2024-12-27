#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the Size of array : ";
    cin >> size;

    int box[size][size];

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << "Box [" << i << "] [" << j << "] = ";
            cin >> box[i][j];
        }
    }

    cout << "Matrix is : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout << box[i][j] << " ";
        }
        cout << endl;
        
    }
     
    cout << "Transpose of Matrix : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            cout<< box[j][i] << " ";
        }
        cout<<endl;
    }

    
}