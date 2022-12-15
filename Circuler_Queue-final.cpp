#include<iostream>
using namespace std;

int Circuler_Queue[3],Totalvalue=3,front=-1,rear=-1;


Enqueue(int x)
{
    if(((rear+1)%Totalvalue)==front)
    {
        cout<<"Circuler_Queue is full"<<endl;

    }

    if (front==-1 && rear==-1)
    {
        front=rear=0;
        Circuler_Queue[rear]=x;
    }
    else
    {
        rear=(rear+1)%Totalvalue;
        Circuler_Queue[rear]=x;
    }
}

Dequeue()
{
    if(front==-1 && rear== -1)
    {
        cout<<"Circuler_Queue is Empty"<<endl;
    }
    if (front==rear)
    {
        front=rear=-1;
    }
    else
    {
        front=(front+1)%Totalvalue;
    }
}

ShowElement()
{
    if(front==-1 && rear ==-1)
    {
        cout<<"The Circuler_Queue Is Empty"<<endl;
    }

    else if(front<=rear)
    {
        cout<<"THE ELELMENTS ARE = ";

        for(int i=front; i<=rear; i++)
        {
            cout<<Circuler_Queue[i]<<"   Index No = "<<i<<endl;
        }
        }

    else
    {
        for(int i=front; i<=(Totalvalue-1); i++)
        {
            cout<<Circuler_Queue[i]<<"   Index No = "<<i<<endl;
        }
            for(int i=0; i<=rear; i++)
            {
                cout<<Circuler_Queue[i]<<"   Index No = "<<i<<endl;
            }
        }
    }





int main()
{

    Enqueue(70);
    Enqueue(20);
    Enqueue(30);
    //Enqueue(10);
    Dequeue();
    Dequeue();
    Enqueue(100);

    ShowElement();


    return 0;
}
