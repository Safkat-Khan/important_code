#include <iostream>
using namespace std;

int main()
{
    int size1, size2;
    cout<<"Enter the size of first array: ";
    cin>>size1;
    cout<<"Enter the size of second array: ";
    cin>>size2;

    int Array1[size1], Array2[size2], Array3[size1+size2];

    cout<<"\nPlease enter the element of first array: ";
    for(int i=0; i<size1; i++)
    {
        cin >> Array1[i];
    }

    cout<<"\nPlease enter the element of second array: ";
    for(int i=0; i<size2; i++)
    {
        cin >> Array2[i];
    }

    int j = 0;
    for(int i = 0 ; i < size1+size2; i++)
    {
        if(i < size1)
        {
            Array3[i] = Array1[i];
        }
        else
        {
            Array3[i] = Array2[j];
            j++;
        }
    }

    cout << "\nThe Array after marging is: ";
    for (int i = 0; i < size1+size2; i++)
    {
        cout << Array3[i] <<" ";
    }

    cout << "\n\nThe Marge Array in reverse order is: ";
    for (int i = size1+size2-1; i >= 0; i--)
    {
        cout << Array3[i] <<" ";
    }
    cout<<endl<<endl;
    return 0;
}


