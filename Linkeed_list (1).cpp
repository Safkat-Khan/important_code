#include<iostream>
using namespace std;
typedef struct ListNode
{
    int data;
    struct ListNode *next;
}* nodeptr;

nodeptr head=NULL;
nodeptr curr;

void addData(int item)
{
    nodeptr newNode=new ListNode;
    newNode->data=item;
    newNode->next=NULL;
    if(head==NULL)
    {
        head=newNode;
    }
    else
    {
        curr->next=newNode;
    }
    curr=newNode;
}

void display(nodeptr ptr)
{
    while(ptr!=NULL)
    {
        cout<<ptr->data<<" ";
        ptr=ptr->next;
    }
}


int main(){
    int item,n,i;
    cout<<"Enter number of nodes: ";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        cout<<"Enter node "<<i<<": ";
        cin>>item;
        addData(item);
    }
    cout<<"Displaying nodes--"<<endl;
    display(head);
    cout<<endl;
    return 0;
}
