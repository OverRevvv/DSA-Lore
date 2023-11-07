#include <stdio.h>
#include <stdlib.h>

struct node // structure to make a linkedlist since it's not inbuilt FN of C
{
    int data;          // linked list to store integers
    struct node *next; //  pointer for linked list to store address
};

void linklistTraversal(struct node *head) // head pointer
{
    struct node *ptr = head;
    do // since do while loop run 1 time as default pointer is pointing to the next element in LL
    {
        printf("%d\t", ptr->data);
        ptr = ptr->next; // sliding the pointer to next node

    } while (ptr != head); // since it's circular LL
};

struct node *insertAtFirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    // it's pointing on the last node of this circular linked list
    p->next = ptr;
    ptr->next = head;
    head = ptr;

    return head;
}

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
    fourth->next = head; // And that's how we make circular linked list

    // cause it's really is a circlular if we imagine it starts from head and also end at head
    printf("Before Insertion Circular Linked List(STOCK)\n");

    linklistTraversal(head);

    printf(" \n");

    printf("After insertion Circular Linked List (MODED) \n");
    head = insertAtFirst(head, 99);

    linklistTraversal(head); // calling display FN

    return 0;
}