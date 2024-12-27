#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the Size of array : ";
    cin >> size; 

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Box [" << i << "] = ";
        cin >> box[i];
    }

    cout << "Negetive Number is : " << endl;
    for (int i = 0; i < size; i++)
    {
        if (box[i] < 0)
        {
           cout << box[i] << " ";
        }
        
    }
    
    
}