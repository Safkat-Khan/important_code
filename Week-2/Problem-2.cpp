#include <iostream>
using namespace std;

int main()
{
    int size1, size2, n=0;
    cout<<"Enter the size of first array: ";
    cin>>size1;
    cout<<"Enter the size of second array: ";
    cin>>size2;

    int Array1[size1], Array2[size2], Array3[max(size1,size2)];

    cout<<"\nPlease enter the element of first array: ";
    for(int i=0; i<size1; i++)
    {
        cin >> Array1[i];
    }

    cout<<"\nPlease enter the element of second array: ";
    for(int j=0; j<size2; j++)
    {
        cin >> Array2[j];
    }

    for(int i = 0 ; i < size1; i++)
    {
        for (int j = 0 ; j < size2; j++)
        {
            if(Array1[i] == Array2[j])
            {
                Array3[n] = Array2[j];
                n++;
            }
        }
    }

    if(n == 0)
    {
        cout<<"\n\n ------- No Common Element -------"<<endl<<endl;
    }
    else
    {
        cout<<"\n\nThe common elements of both array are: "<<endl;
        for (int i = 0; i<n; i++)
        {
                cout << Array3[i] << " ";
        }
        cout<<endl<<endl;
    }
    return 0;
}

