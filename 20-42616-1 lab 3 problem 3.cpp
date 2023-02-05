#include <iostream>
using namespace std;

struct Student
{
    int studentID;
    int completeCredits;
    double CGPA;
};

int main()
{
   struct Student S[10];
   int i, n = 0;
   bool isUsed[10] = {0};

   for(i=0; i<10; i++)
   {
       cout << " ---------- Please enter the information of " << (i + 1) << "th number student ---------- "<< endl<<endl;
       cout<<"Student ID: ";
       cin>>n;
       if((n >= 0) && (n <= 9))
       {
           if (isUsed[n] == false)
            {
                S[i].studentID = n;
                isUsed[n] = true;
                cout<<"Number Of Credit Completed: ";
                cin>>S[i].completeCredits;
               cout<<"CGPA: ";
               cin>>S[i].CGPA;
            }

            else
            {
                cout << "Student ID has already been used. Try different ID !!" << endl;
                i--;
            }
        }

        else
        {
            cout << "Student ID from 0-9 only." << endl;
            i--;
        }


       cout<<endl;
   }

   cout<<"\nStudent ID who have earn CGAP more than 3.75 : ";
   for(i=0;i<10;i++)
   {
       if(S[i].CGPA > 3.75)
       {
            cout<<S[i].studentID<<endl;
       }
   }

   cout<<"\nStudent ID who have completed more than 50 credits : ";
   for(i=0;i<10;i++)
   {
       if(S[i].completeCredits > 50)
       {
            cout<<S[i].studentID<<endl;
       }
   }
   cout<<endl<<endl;
   return 0;
}
