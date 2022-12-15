#include<iostream>
using namespace std;

int Queue[5],n=5,front=-1,rear=-1;

Enqueue(int val)
{

    if(((rear+1)%n)==front)
    {
        cout<<"queue full "<<endl;
    }

    if(front==-1 && rear==-1)
    {
        front=rear=0;
        Queue[rear]=val;
    }

    else
    {
        rear=(rear+1)%n;
        Queue[rear]=val;
    }
}

Dequeue()
{
    if(front==-1 && rear==-1)
    {
        cout<<"Queue is empty"<<endl;
    }

    if (front==rear)
    {
        front=rear=-1;

    }

    else
    {
        front=(front+1)%n;
    }
}


ShowValue()
{

    if(front==-1 && rear ==-1)
    {
        cout<<"Queue is empty"<<endl;
    }

    if (front<=rear)
    {

        for(int i=front; i<=rear; i++)
        {
            cout<<Queue[i]<<" Index no = "<<i<<endl;
        }
    }

    else
    {
        for(int i=front; i<=(n-1); i++)
        {
            cout<<Queue[i]<<" Index no = "<<i<<endl;
        }
        for(int i=0; i<=rear; i++)
        {

            cout<<Queue[i]<<" Index no = "<<i<<endl;
        }
    }
}



int main()
{


    Enqueue(30);
    Enqueue(70);
    Enqueue(90);
    Enqueue(20);
    Dequeue();
    Enqueue(55);
    Enqueue(22);
    ShowValue();

}
