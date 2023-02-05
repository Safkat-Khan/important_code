#include <iostream>
using namespace std;

int main()
{
    int size, count, i, j;
    cout<<"Enter the size of first array: ";
    cin>>size;

    int Array[size], Frequency[size];

    cout<<"\nPlease enter the element of an array: ";
    for(i=0; i<size; i++)
    {
        cin >> Array[i];
        Frequency[i] = 0;
    }

    for(i=0; i<size; i++)
    {
        count = 1;
        for(j=i+1; j<size; j++)
        {
            /* If duplicate element is found */
            if(Array[i] == Array[j])
            {
                count++;
                Frequency[j] = -1;
            }
        }

        if(Frequency[i] == 0)
        {
            Frequency[i] = count;
        }
    }

    cout<<"\n\n --------- Frequency of all elements of an array --------- \n\n";
    for(i=0; i<size; i++)
    {
        if(Frequency[i] != -1)
        {
            cout<< Array[i] <<" occurs = " << Frequency[i] << " times."<<endl<<endl;
        }
    }
    return 0;
}
