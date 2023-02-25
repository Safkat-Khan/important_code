#include <iostream>
#include <cstring>
using namespace std;

struct listNode{

    int data;
    listNode *next;
};
class linked_list
{
private:
    listNode *head;
public:
    linked_list()
    {
        head = NULL;
    }
listNode *one=new listNode;
listNode *two=new listNode;
listNode *three=new listNode;
listNode *four=new listNode;
listNode *five=new listNode;

void InsertAtBegin(int n)
{
    listNode *newNode=newNode;

    newNode->data = n;
    newNode->next = head;
    head = newNode;
}
void InsertAtEnd(listNode *current ,int n)
{
    listNode  *newNode= new listNode;
    newNode-> data = n;
    newNode->next!= Null;
    while(current->next!=Null)
    {
        current = current -> next;
    }
        current->next=newNode;
}

void insertAfter(listNode *current, int n)
{
       listNode *newNode =new listNode;

    newNode->data = n;
    newNode->next = current->next;
    current->next = newNode;}

