#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

struct Stack
{
    int top;
    unsigned capacity;
    int *array;
};

// function to create a Stack of given capacity. it initialize
// the size of Stack as 0

struct Stack *createStack(unsigned capacity)
{
    struct Stack *stack = (struct Stack *)malloc(sizeof(struct Stack));
    stack->capacity = capacity;
    stack->top = -1; //-1 since there's not even any thing assigned on 0th value of top
    stack->array = (int *)malloc(stack->capacity * sizeof(int));
    return stack;
};

// Stack is full when top is equal to the capacity/last index (Overflow)
int isFull(struct Stack *stack)
{
    return stack->top == stack->capacity -1;
}
// Stack is empty if top is equal to -1 (Underflow)
int isEmpty(struct Stack *stack)
{
    return stack->top == -1;
}
// Function to add item in the stack and also increase top value by 1
void push(struct Stack *stack, int item)
{
    if (isFull(stack))
        return;
    stack->array[++stack->top] = item;
    printf("%d pushed to stack\n", item);
}
// Function to remove an item from stack and decrease top value by 1
int pop(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top--];
}
// Fucntion to return the top of the stack without removing it
int peek(struct Stack *stack)
{
    if (isEmpty(stack))
        return INT_MIN;
    return stack->array[stack->top];
}
// Driver program to test above functions
int main()
{
    struct Stack *stack = createStack(10);

    push(stack, 10);
    push(stack, 34);
    push(stack, 69);
    push(stack, 96);

    printf("%d popped from stack", pop(stack));

    return 0;
}