#include <iostream>
using namespace std;
int main(){
    int k,i, n=5,mimo[10]={2,3,5,6,7};

    for(i=n;i>0;i--)
    mimo[i]=mimo[i-1];
    mimo[0]=1;n++;
    mimo[n++]=9;
    for(i=0;i<n;i++)
        cout<<mimo[i];



}
