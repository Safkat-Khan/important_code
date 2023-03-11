#include<bits\stdc++.h>
using namespace std;


int main()
{
int i,j,item,n;
 cout<<"Enter the size of the array = ";
    cin>>n;
    int A[n];
    cout<<"Enter the elements of the array = ";
    for(i=0; i<n; i++)
    {
        cin>>A[i];
    }

for(int i=1;i<n;i++){
        item=A[i];

        j=i-1;

        while(j>=0 &&A[j]>item){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=item;
}


 for(i=0; i<n; i++)
    {
        cout<<A[i]<<" ";
    }









    return 0;
}
