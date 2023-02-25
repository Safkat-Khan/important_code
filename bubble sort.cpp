#include<iostream>
using namespace std;
int main(){
    int n = 6;
    int arr[n]={92,82,21,16,18,95},t=0,temp,k=n,count1=0,count2=0;
    for(int i = 0 ; i < k ;i++){
        for(int j=0;j<=k-1;j++){
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count2++;
            }
        }
        count1+=i;
    }

    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nComparison "<<count1-1;
    cout<<"\nExchange "<<count2;
}
