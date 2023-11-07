#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *next;
};

void linklistTraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next;
    }
};

// case 1: Deletion at the begining of the linked list

struct node *deleteFirst(struct node *head) // TIME COMPLEXITY OF THIS ALGO IS O(1)
{
    struct node *ptr = head; // pointing on head
    head = head->next;       // pointing next node as new head
    free(ptr);               // releasing the memory that was reserved for t-node
    return head;             // returning new head
}

// Case 2: Deletion in between given linkedList

struct node *deleteAtIndex(struct node *head, int index) // TIME COMPLEXITY OF THIS ALGO IS O(n)

{
    struct node *p = head; // pointer for head
    int i = 0;
    while (i != index - 1) // loop will run until it stops before T-node
    {
        p = p->next; // where deletion have to happen
        i++;
    }
    struct node *q = p->next; // creating an external pointer to point on the T-node
    p->next = q->next;        // using external pointer to bypass the T-node since q have address of next node
    free(q);
    return head; // returning old head with deleted element
}

// just an alt method for this algo
struct node *deleteAtIndexALT(struct node *head, int index) // TIME COMPLEXITY OF THIS ALGO IS O(n)

{
    struct node *p = head;       // pointer for head
    struct node *q = head->next; // creating an external pointer to point on the T-node

    for (int i = 0; i < index - 1; i++) // this method is similar to the Delete at end method
    {
        p = p->next; // pointing before T-Node
        q = q->next; // pointing after T-node the T-node is between these pointers
    }

    p->next = q->next; // using external pointer to bypass the T-node since q have address of next node
    free(q);
    return head; // returning old head with deleted element
}

//  Case 3: Deletion at the end of the LinkedList

struct node *deleteAtEnd(struct node *head) // TIME COMPLEXITY OF THIS ALGO IS 0(n)
{
    struct node *p = head;    // pointer for head
    struct node *q = p->next; // pointing on next node after head
    while (q->next != NULL)   // loop will run until T-Node if found
    {
        q = q->next;        // where deletion have to happen
        if (q->next = NULL) // condition to delete the T-node
        {                   // when pointer 'q' reach to end end of the node this condtion will be executed
            p->next = NULL; // since it's 1 node behind T-node
            free(q);        // releasing the memory that was reserver for the T-node
        }
    }
    return head; // returning old head but with new node
}

struct node *deleteAtEndALT(struct node *head) // TIME COMPLEXITY OF THIS ALGO IS 0(n)
{
    struct node *p = head;    // pointer for head
    struct node *q = p->next; // pointing on next node after head

    while (q->next != NULL) // loop will run until T-Node if found
    {
        p = p->next; // pointing before T-Node
        q = q->next; // pointing after T-node the T-node is between these pointers
    }
    p->next = NULL; // since it's 1 node behind T-node
    free(q);        // releasing the memory that was reserver for the T-node
    return head;    // returning old head but with new node
}

// Case 4: Deletion element with a given value from the linked list

struct node *deleteWithValue(struct node *head, int value) // TIME COMPLEXITY OF THIS ALGO IS O(n)

{
    struct node *p = head;       // pointer for head
    struct node *q = head->next; // creating an external pointer to point on the T-node
    while (q->data != value && q->next != NULL)
    {
        p = p->next; // pointing before T-Node
        q = q->next; // pointing after T-node the T-node is between these pointers
    }
    if (q->data==value)
    {
    p->next = q->next; // using external pointer to bypass the T-node since q have address of next node
    free(q);
    }
    
    return head; // returning old head with deleted element
}

int main()
{

    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 7;
    head->next = second;

    second->data = 11;
    second->next = third;

    third->data = 96;
    third->next = fourth;

    fourth->data = 69;
    fourth->next = NULL;

    printf("Before Deletion (STOCK)\n");

    linklistTraversal(head);

    printf(" \n");

    printf("After Deletion (MODED) \n");

    // head = deleteFirst(head); //passing head for deletion

    // deleteAtIndex(head, 2); // passing head data with index to delete T-node
    // deleteAtIndexALT(head, 2); // passing head data with index to delete T-node

    // deleteAtEnd(head); // pasing head and data
    // deleteAtEndALT(head); // pasing head and data

    deleteWithValue(head,11);//passing head and value for deletion

    linklistTraversal(head); // calling the display function

    return 0;
}