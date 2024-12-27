#include <iostream>
using namespace std;

int main()
{
    int size,temp=0;

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

    temp = box[0][0];

    cout << "Max Number is : " << endl;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (box[i][j] > temp)
            {
                temp = box[i][j];
            } 
        }
        
    }
    cout << temp;
    
}