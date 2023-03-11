#include<bits\stdc++.h>
using namespace std;


int main()
{
    int i,j,index_mini,temp,n;

    cout<<"Enter the size of the array = ";
    cin>>n;

    int A[n];

    cout<<"Enter the elements of the array = ";


    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }
    for(i=0; i<n-1; i++)
    {
        index_mini=i;
        for(j=i+1; j<n; j++)
        {
            if(A[j]<A[index_mini])
            {
                index_mini=j;
            }
        }
        if(index_mini!=i)
        {
            temp=A[i];
            A[i]=A[index_mini];
            A[index_mini]=temp;
        }
    }


    for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }

    return 0;
}
