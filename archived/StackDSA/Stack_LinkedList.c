#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

// A structure to represent stack
struct StackNode
{
    int data;
    struct StackNode *Next;
};

struct StackNode *newNode(int data)
{
    struct StackNode *stackNode = (struct StackNode *)malloc(sizeof(struct StackNode)); // allocating memory for stack
    stackNode->data = data;                                                             // assigning data to in node
    stackNode->Next = NULL;                                                             // pointing next on Null
    return stackNode;                                                                   // returning the stack
}

int isEmpty(struct StackNode *root)
{
    return !root;
}

void push(struct StackNode **root, int data)
{
    struct StackNode *StackNode = newNode(data); //allocating a new node for the stack
    StackNode->Next = *root;        //root is the head of the node 
    *root= StackNode;
    printf("%d pushed into stack\n",data);
}

int pop(struct StackNode** root)
{
    if (isEmpty(*root))
        return INT_MIN;
        
    struct StackNode* temp = *root;
    *root =(*root)->Next;
    int popped = temp->data;
    free(temp);

    return popped;
}

int peek(struct StackNode* root)
{
    if(isEmpty(root))
        return INT_MIN;
    return root->data;
}
int main()
{
    struct StackNode* root = NULL;
    push(&root,10);
    push(&root,20);
    push(&root,69);
    push(&root,96);

    printf("%d popped from stack\n",pop(&root));    
    printf("Top Element is %d\n",peek(root));
    return 0;
}