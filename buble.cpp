#include<bits/stdc++.h>

using namespace std;

int main()
{
    int i,j,s;
    cout<<"Enter the size of the array = ";
    cin>>s;
    int array[s];
    cout<<"Enter the elements of the array = ";
    for(i=0; i<s; i++)
    {
        cin>>array[i];
    }

    for(i=0; i<s; i++)
    {
        for(j=0; j<s-i-1; j++)
        {
            if(array[j]>array[j+1])
            {
                int temp=array[j];
                array[j]=array[j+1];
                array[j+1]=temp;
            }
        }
    }

    for(i=0; i<s; i++)
    {
        cout<<array[i]<<"  ";
    }


    return 0;
}
