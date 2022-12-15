#include<iostream>
using namespace std;

struct node
{
    int data;
    node *next;
};

int main()
{
    int i,n,item;
    node *newptr,*temptr,*head;
    head=NULL;

    cout<<"Input Size = "<<endl;
    cin>>n;
    cout<<"Elements = ";

    for(i= 0; i<n; i++)
    {
        cin>>item;
        newptr=new(node);
        newptr->data=item;
        newptr->next=NULL;

        if(head==NULL)
        {
            head=newptr;
            temptr=newptr;
        }
        else
        {
            temptr->next=newptr;
            temptr=newptr;

        }

    }
    temptr=head;
 cout<<endl;
  cout<<endl;
    for(i=0;i<n;i++){
        cout<<temptr->data<<" -> "<<temptr->next<<endl;
        temptr=temptr->next;
        cout<<endl;

    }
}
