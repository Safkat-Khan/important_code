#include<iostream>
using namespace std;



int main()
{
    int arr[10],even=0,odd=0,i;



    for(i=0; i<10; i++)
    {
        cout<<"\nEnter arr["<<i<<"] Element :: ";
        cin>>arr[i];
    }




    for(i=0; i<10; i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }




    cout<<even<<" total even found"<<endl;
    cout<<odd<<" total odd found"<<endl;



    return 0;



}
