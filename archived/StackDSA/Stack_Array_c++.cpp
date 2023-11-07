#include <bits/stdc++.h>
using namespace std;

#define MAX 100 // Global Variable for the size of the stack

class Stack
{
    int top;

public:
    int a[MAX]; // Maximum size of STACK

    Stack() { top = -1; } // Default constructor
    bool push(int x);    // Boolean so that it can return true and false while doing operation
    int pop();           // Pop to remove element from stack
    int peek();          // so that it can return top value of the stack
    bool isEmpty();      // to check if stack is empty or not
};

bool Stack::push(int x)
{                         // if top is equal to MAX it means it's full
    if (top >= (MAX - 1)) // MAX-1 because counting in programming starts from 0
    {
        cout << "Stack Overflow" << endl;
        return false;
    }
    else
    {
        a[++top] = x; //++Top since Top value is incrased after pushing new element in stack
        cout << x << " Pushed into stack" << endl;
        return true;
    }
}

int Stack::pop()
{
    if (top < 0) // Top should be more than 0 if Stack is full
    {
        cout << "Stack Underflow" << endl;
        return 0;
    }
    else
    {
        int x = a[top--]; // Top -- cause one element was removed from stack
        return x;         // returning the removed value
    }
}
int Stack ::peek()
{
    if (top < 0)
    {
        cout << "Stack is Emtpy" << endl;
        return 0;
    }
    else
    {
        int x = a[top]; // just peeking at the top element of the stack
        return x;       // returning this element to display
    }
}
bool Stack:: isEmpty()
{
    return (top<0);
}
// Driver program to test out the fucntions above
int main()
{
    class Stack s;
    // pushing all the elements into stack
    s.push(10);
    s.push(54);
    s.push(69);
    s.push(96);

    // Display program to display all elements of stack

    // Removing one element from stack
    cout << s.pop() << " Popped from Stack" << endl;

    // Displaying top element after popping
    cout << "Top element of the Stack is " << s.peek()<<endl;

    cout << "Elements present in stack : ";
    while (!s.isEmpty())
    {
        // print top element in stack
        cout << s.peek() << " ";
        // remove top element in stack
        s.pop();
    }

    return 0;
}