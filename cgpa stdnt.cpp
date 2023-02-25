#include<iostream>
using namespace std;
#define nl '\n'

int main(){
    struct sinfo{
        int id;
        int ccredit;
        float cgpa;
    };

    int n = 10;
    sinfo students[n];


    for (int i = 0; i < n ; i++ ){
        cout<<"Enter Student's id : "<<nl;
        cin>>students[i].id;
        cout<<"Enter Student's completed credit : "<<nl;
        cin>>students[i].ccredit;
        cout<<"Enter Student's CGPA : "<<nl;
        cin>>students[i].cgpa;
    }

    cout<<"Printing Student's ID with CGPA more than 3.75 "<<nl;
    for (int i = 0; i < n ; i++ ){
        if(students[i].cgpa >= 3.75){
            cout<<"ID :: "<<students[i].id<<nl;
        }
        else{
            continue;
        }
    }

    cout<<"Printing Student's ID who has completed more than 50 credits "<<nl;
    for (int i = 0; i < n ; i++ ){
        if(students[i].ccredit >= 50){
            cout<<"ID :: "<<students[i].id<<nl;
        }
        else{
            continue;
        }
    }

    return 0;
}
