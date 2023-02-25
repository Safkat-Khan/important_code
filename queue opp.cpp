#include <iostream>





using namespace std;

#define MAX 5

class Queue

{

      int front,rear;

      int queue[MAX];



      public:



      Queue()

      {

              front=rear=-1;

      }

      bool isfull(){
          if (front ==0 && rear==MAX-1){
            return true;
          }
        return false;
      }
      bool isempty(){
          if(front ==-1)
            return true;
          else
            return false;
          }
       void Iinsert(int NUM)

       {

              if(isfull()){
            cout<<"\nQUEUE IS FULL";

             }

             else{
             if(front==-1) front=0;
             rear=(rear+1)%MAX;
              queue[rear]=NUM;

            cout<<"\nITEM INSERTED: "<<NUM;

             }


       }



       void qdelete()

       {  int NUM;



              if(isempty())

             {

                       cout<<"\nQUEUE IS EMPTY";


             }

             else{
            NUM=queue[front];
            if(front==rear){
            front=-1;
            rear=-1;}
            else {
                front=(front+1)%MAX;
            }
           cout<<"\n\nITEM DELETED: "<<NUM;

             }


       };



int main()

{

      Queue c;
      c.Iinsert(1);

      c.Iinsert(2);


       c.qdelete();

      return 0;

}

