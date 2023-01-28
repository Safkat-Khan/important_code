#include <iostream>
using namespace std;

int main()
{
    int size, count = 0, num;
    cout<<"Please enter a number to search: ";
    cin>>num;

    cout<<"Enter the size of first array: ";
    cin>>size;

    int Array[size];
    cout<<"\nPlease enter the element of an array that store multiple of "<< num <<" is: ";
    for(int i=0; i<size; i++)
    {
        cin >> Array[i];
    }

    cout<<"\n\nThe array with multiple " << num << " is: ";
    for(int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }

    for (int i = 0; i < size; i++)
    {
        if (Array[i] == num)
        {
            count++;
        }
    }

    cout << "\n\nThe number occurs "<< count <<" times in the array." << endl << endl;
    return 0;
}
