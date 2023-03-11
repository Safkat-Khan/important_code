#include <iostream>
using namespace std;

int Stack[10], Top=0, MaxSize=10;

bool isEmpty()
{
	return (Top == 0);
}


bool isFull()
{
	return (Top == MaxSize);
}



bool push(int Element)
{
	if( isFull() )
    {
        cout << "Stack is Full\n";
        return false;
    }
 	Stack[ Top++ ] = Element;
 	cout<< Element <<" is inserted into the Stack successfully.\n";
	return true;
}



bool pop()
{

	if( isEmpty() )
    {
        cout << "Stack empty\n";
        return false;
    }
	Top--;
	cout << "Pop operation is performed successfully.\n";
	return true;
}



int topElement()
{
	return Stack[ Top - 1 ];
}



void show()
{
	if(isEmpty())
    {
        cout << "Stack empty\n";
        return;
    }
    cout << "\n---------- STACK ELEMENTS ----------\n";
	for( int i=Top-1; i>=0; i-- )
	{
        cout << Stack[i] << endl;
	}
	cout<<endl<<endl;
}



int main()
{

    push(5);
    push(6);
    push(7);
    push(8);
    push(9);
    push(10);
    show();
    cout<<"\nTop Element of the Stack: " << topElement() << endl;

    pop();
    pop();
    cout<<"\nTop Element of the Stack: " << topElement() << endl;
    show();

    pop();
    cout<<"\nTop Element of the Stack: " << topElement() << endl;
    show();

    return 0;
}
