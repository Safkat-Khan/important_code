#include <iostream>
using namespace std;

int main()
{
    int size, flag=0;
    cout<<"Enter the size of first array: ";
    cin>>size;

    int Array[size];
    cout<<"\nPlease enter the element of an array: ";
    for(int i=0; i<size; i++)
    {
        cin >> Array[i];
    }

    cout<<"\n\nThe array with duplicate element is: ";
    for(int i=0; i<size; i++)
    {
        cout << Array[i] << " ";
    }
    cout << endl << endl;

    for (int i = 0; i < size; i++)
    {
        int j;
        for(j = 0; j < i; j++)
        {
            if (Array[i] == Array[j])
            {
                flag = 1;
                break;
            }
        }

        if (i == j)
        {
            cout << Array[i] << " ";
        }
    }

    if(flag == 0)
    {
        cout<<" ------- Array already unique ------- ";
    }
    cout << endl << endl;
    return 0;
}


