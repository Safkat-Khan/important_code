#include<iostream>
using namespace std;
struct Node
{
	int data;
	Node* next;

};
Node* head= NULL;

Node* GetNewNode(int x)
{
	Node* NewNode = new Node();
	NewNode->data = x;
	NewNode->next = NULL;
	return NewNode;
}

void InsertAtHead(int x)
{
	Node* NewNode = GetNewNode(x);
	NewNode->next = head;
	head = NewNode;

}

void InserAtTail(int x)
{
	Node* NewNode = GetNewNode(x);
	if (head == NULL)
	{
		head = NewNode;
		return;
	}
	Node* temp = head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = NewNode;


}



void Delete(int n)
{

	if (head == NULL)
	{
		cout << "Error: Nothing to delete " << endl;
		return;
	}
	Node* temp = head;
	if (n == 1)
	{
		head = temp->next;
		delete temp;
		return;
	}
	for (int i = 1; i < n - 1; i++)
	{
		temp = temp->next;
	}
	Node* temp2 = temp->next;
	temp->next = temp2->next;
	delete temp2;
	return;
}

void Traverse()
{
	Node* temp = head;
	cout << "List is: ";
	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;

	}
	cout << endl;
}

void Search(int x)
{
	Node* temp = head;
	while (temp != NULL)
	{
		if (temp->data == x)
		{
			cout << "Found" << endl;
			return;
		}
		temp = temp->next;

	}
	cout << "Not found" << endl;
}

int main()
{
	head = NULL;
	InsertAtHead(5);
	InsertAtHead(6);
	InsertAtHead(7);
	InsertAtHead(8);
	Traverse();

	InserAtTail(9);
	InserAtTail(10);
	Traverse();

	Traverse();
	Delete(6);
	Traverse();
	Search(10);
	Search(100);
	Delete (1);
	Traverse();

}

