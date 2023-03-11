#include <iostream>

using namespace std;

#define MAX 1000

class Stack {
    int top;

public:
    int stk[MAX]; // Maximum size of Stack

    Stack() { top = -1; }
    bool push(int x);
    int pop();
    int topElement();
    bool isEmpty();
    void show();
};

bool Stack::push(int x)
{
    if (top >= (MAX - 1)) {
        cout << "Stack Overflow";
        return false;
    }
    else {
        stk[++top] = x;
        cout << x << " pushed into stack\n";
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    }
    else {
        int x = stk[top--];
        return x;
    }
}
int Stack::topElement()
{
    if (top < 0) {
        cout << "Stack is Empty";
        return 0;
    }
    else {
        int x = stk[top];
        return x;
    }
}

bool Stack::isEmpty()
{
    return (top < 0);
}

void Stack::show()
{
    if(isEmpty()) { cout << "Stack empty\n"; return; }
    cout << "The Elements of the stack are: \n";
	for( int i=top; i>=0; i-- ) cout << stk[i] << endl;
}

// Driver program to test above functions
int main()
{
    class Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.show();
    cout << " Now the topElement value of stack is " << s.topElement() <<endl;
    cout << s.pop() << " Popped from stack\n";
    cout << " topElement value of stack is " << s.topElement() <<endl;
    if (s.isEmpty())
        cout << "Stack Is Empty\n";
    else
        cout << "Stack Is Not Empty\n";
    return 0;

}
