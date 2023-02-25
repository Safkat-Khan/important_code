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
void searchItem(int n)
{
    nodeptr ptr=head;
    while(ptr->data!=n && ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==n)
    {
        cout<<n<<" is found"<<endl;
    }
    else
    {
        cout<<n<<" is not found"<<endl;
    }
}
void addBegin(int n)
{
    nodeptr newNode=new ListNode;
    newNode->data=n;
    newNode->next=head;
    head=newNode;
}
void addMiddle(int n,int f)
{
    nodeptr newNode=new ListNode;
    newNode->data=n;
    newNode->next=NULL;

    nodeptr ptr=head;
    while(ptr->data!=f &&ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->data==f)
    {
        newNode->next=ptr->next;
        ptr->next=newNode;
    }
    else{
        cout<<n<<" not found";
    }
}
void addLast(int n)
{
    nodeptr newNode= new ListNode;
    newNode->data=n;
    newNode->next=NULL;

    nodeptr ptr=head;
    while(ptr->next!=NULL)
    {
        ptr=ptr->next;
    }
    if(ptr->next==NULL)
    {
       ptr->next=newNode;
    }
}
void deletedata(int n){
    nodeptr ptr=head;
    nodeptr previous=NULL;

    if(ptr!=NULL && ptr->data==n){
        head=ptr->next;
        delete ptr;
        return;
    }

    while(ptr->data!=n && ptr->next!=NULL)
    {
        previous=ptr;
        ptr=ptr->next;
    }
    if(ptr->data==n){
        previous->next= ptr->next;
        delete ptr;
    }
    else{
        cout<<n<<" is not in the list";
    }
}

int main()
{
    int item,n,i,s,b,m,c,middleItem, lastItem,d;
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

    // Switch Case will help you to focus on specific function.
    //You don't have to run the whole program to execute one particular task.
    // check the below line for instruction.
    cout<<"Search=1 --- AddBegin=2 --- AddMiddle=3 --- AddLast=4 --- Delete=5"<<endl;
    cout<<"Enter the number: ";
    cin>>c;
    switch(c){
        case 1:
            cout<<"Which node do you want to search: ";
            cin>>s;
            searchItem(s);
            break;
        case 2:
            cout<<endl;
            cout<<"Enter node for beginning: ";
            cin>>b;
            addBegin(b);
            display(head);
            break;
        case 3:
            cout<<endl;
            cout<<"After which node do you want to insert: ";
            cin>>m;
            cout<<"Enter node after "<<m<<" : ";
            cin>>middleItem;
            addMiddle(middleItem,m);
            display(head);
            break;
        case 4:
            cout<<endl;
            cout<<"Enter node for Last: ";
            cin>>lastItem;
            addLast(lastItem);
            display(head);
            break;
        case 5:
            cout<<endl;
            cout<<"Which node you want to delete: ";
            cin>>d;
            deletedata(d);
            display(head);
            break;
    }

}
