#include<iostream>
using namespace std;
int main()
{
    int ARRY1[6]={1,5,3,2,6,4};
    int size=6;
   int ARRY2[6]={1,2,3,4,5,6};



  int k,i,x;
  k=0;
  x=0;
   int Size=12;
  int ARRY3[Size];



    for (int i=0;i<size;i++)
    {
      int chECKk=ARRY1[i];
      for(int j=0; j<6;j++)
      {



          if(ARRY2[j]==chECKk)
          {
              ARRY3[x++]=chECKk;
          }
      }
    }
if (x!=0)
{
    for(i=0;i<x;i++)
{
    cout<<ARRY3[i];
}



}




else
    cout<<"No common element Found";
}
