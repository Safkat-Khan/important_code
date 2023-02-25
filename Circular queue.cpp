#include <iostream>
#define MAX 5

using namespace std;

class CircularQueue {
public:
int queuee[ MAX], front, rear;

  CircularQueue() {
    front =rear= -1;

  }

  bool isFull() {
    if (front == 0 && rear == MAX - 1) {
      return true;
    }
    if (front == rear + 1) {
      return true;
    }
    return false;
  }

  bool isEmpty() {
    if (front == -1)
      return true;
    else
      return false;
  }

  void enQueue(int num) {
    if (isFull()) {

      cout << " \nQueue is full"<<endl;
    } else {
      if (front == -1) front = 0;
      rear = (rear + 1) % MAX;
      queuee[rear] = num;
      cout <<"\nItem Inserted " << num ;
    }
  }

  int deQueue() {
    int num;
    if (isEmpty()) {
      cout << "Queue is empty" << endl;
    } else {
      num = queuee[front];
      if (front == rear) {
        front = -1;
        rear = -1;
      }

      else {
        front = (front + 1) %MAX;
      }
      return (num);
    }
  }

  void display() {

    int i;
    if (isEmpty()) {
      cout << endl<< "Empty Queue" << endl;
    } else {
      cout << endl<< "Total Items : ";
      for (i = front; i != rear; i = (i + 1) % MAX)
        cout << queuee[i];
      cout << queuee[i]<<endl;


    }
  }
};

int main() {
  CircularQueue c;
  c.deQueue();

  c.enQueue(1);
  c.enQueue(2);
  c.enQueue(3);
  c.enQueue(4);
  c.enQueue(5);
  c.enQueue(6);

  c.display();

  int num = c.deQueue();

  if (num != -1)
    cout << endl
       << "Item Deleted  " << num;

  num = c.deQueue();

  if (num != -1)
    cout << endl
       << "Item Deleted " << num;
  c.display();
  c.enQueue(7);
  c.display();
  c.enQueue(8);
  c.display();
  c.enQueue(8);

  return 0;
}
