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

// case 1: Insert at the begining of the linked list 

struct node *insertAtBegining(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head; // adding new head in the list
    ptr->data = data; // setting data for the new head
    return ptr;
}

// Case 2: Insert in between given linkedList 

struct node *insertAtIndex(struct node *head, int data, int index)

{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // new node
    struct node *h = head;                                         // pointer for head
    ptr->data = data;                                              // setting data into new node
    int i = 0;
    while (i != index - 1) // loop will run until it stops before the place
    {
        h = h->next; // where insertion have to happen
        i++;
    }
    ptr->next = h->next; // now new node have address of next node
    h->next = ptr;       // linking the previous node with new node

    return head;         // returning old head but with new node
}
//  Case 3: Insert at the end of the LinkedList
struct node *insertAtEnd(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // new node
    ptr->data = data; //assigning a value in the new node
    struct node *h = head;                                         // pointer for head
    int i = 0;
    while (h->next != NULL) // loop will run until it stops before the place
    {
        h = h->next; // where insertion have to happen
        i++;
    }
    h->next = ptr;       // linking the previous node with new node
    ptr->next= NULL;    //point the last node to NULL

    return head;         // returning old head but with new node
}

// Case 4: Insert after a particular Node via the address that is provided 

struct node *insertAfterNode(struct node *head,struct node *prevNode, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node)); // new node
    ptr->data = data; //assigning a value in the new node
    struct node *h = head;                                         // pointer for head
   
    ptr->next = prevNode->next;       // linking the previous node with new node
    prevNode->next= ptr;

    return head;         // returning old head but with new node
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

    printf("Before Insertion (STOCK)\n");

    linklistTraversal(head);

    printf(" \n");

    printf("After insertion (MODED) \n");

    // head = insertAtBegining(head, 69); //passing head and data

    // insertAtIndex(head,111,1); //passing head data and index where it will be inserted

    // insertAtEnd(head, 111); //pasing head and data

    head = insertAfterNode(head,second, 69); //passing address and data 

    linklistTraversal(head); //calling the display function 

    return 0;
}   