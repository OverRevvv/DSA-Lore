#include <stdio.h>
#include <stdlib.h>

struct node // structure to make a linkedlist since it's not inbuilt FN of C
{
    int data;          // linked list to store integers
    struct node *next; //  pointer for linked list to store address
};

void linklistTraversal(struct node *ptr) // structure pointer as input
{
    while (ptr != NULL) // equal to NULL so that the loop will run until it reaches the end that is NULL
    {
        printf("%d\t", ptr->data); // using ptr to point on Data of linkedlist
        ptr = ptr->next;           // using ptr to point the address of the next node
    }
};
int main()
{
    struct node *head;   // declaring node head that will be the starting point for LnkdLst
    struct node *second; // head followed by second that is also a node just like head
    struct node *third;
    struct node *fourth; // the last node that will terminate itsell by pointing on NULL at the end

    head = (struct node *)malloc(sizeof(struct node));   // allocating memory for linkedlist but randomly
    second = (struct node *)malloc(sizeof(struct node)); // doing same and it will have completely random address
    third = (struct node *)malloc(sizeof(struct node));  // nodes of linkedlist don't have continous blocks like ARRAY
    fourth = (struct node *)malloc(sizeof(struct node)); // and their location are completely random and dynamic
    // not static location and capacity like an ARRAY

    // Link first and second nodes together while storing data
    head->data = 7; // assigning data in linkedlist
    head->next = second;

    // Link second and third nodes together while storing data
    second->data = 11;
    second->next = third;

    // Link third  and fourth nodes together while storing data
    third->data = 96;
    third->next = fourth;

    // Terminating the list at the fourth node
    fourth->data = 69;
    fourth->next = NULL; // Pointing to NULL to end the linkedlist

    linklistTraversal(head); // calling display FN
    return 0;
}