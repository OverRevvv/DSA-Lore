#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
// void linklistTraversal(struct node *head) // structure pointer as input
// {
//     struct node *ptr = head;
//     do{
//         printf("%d\t", ptr->data); 
//         ptr = ptr->next;           
//     }while (ptr->next != NULL); //Next will reach NULL and this loop will stop

//         printf("%d\t", ptr->data);  //to print data of last Node
//     printf("\nReverse Traversal using Prev Pointers\n");

//     do      //Ptr have address of last node and last node is pointing on NULL
//         {
//             printf("%d\t", ptr->data);
//             ptr = ptr->prev;
//         }while (ptr->prev != NULL); //Prev will reach NULL and loop will stop 


//             printf("%d\t", ptr->data); //to print data of the last node but in reverse
// };

void linklistTraversal(struct node *head) // structure pointer as input
{
    struct node *ptr = head;
    while (ptr->next != NULL) //Next will reach NULL and this loop will stop
    {
        printf("%d\t", ptr->data); 
        ptr = ptr->next;           
    }

        printf("%d\t", ptr->data);  //to print data of last Node

    printf("\nReverse Traversal using Prev Pointers\n");

        while (ptr->prev != NULL) //Prev will reach NULL and loop will stop 
        {
            printf("%d\t", ptr->data);
            ptr = ptr->prev;
        }
            printf("%d\t", ptr->data); //to print data of the last node but in reverse
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
    head->data = 7;
    head->prev = NULL; // Prev of head is pointing on NULL
    head->next = second;

    // Link second and third nodes together while storing data
    second->data = 11;
    second->prev = head; // Prev of second is pointing on head
    second->next = third;

    // Link third  and fourth nodes together while storing data
    third->data = 96;
    third->prev = second; // Prev of third is pointing on second
    third->next = fourth;

    // Terminating the list at the fourth node
    fourth->data = 69;
    fourth->prev = third; // Prev of fourth is pointing on third
    fourth->next = NULL;  // Pointing to NULL to end the linkedlist

    linklistTraversal(head);
    return 0;
}