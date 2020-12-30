#include<stdio.h>
#include<stdlib.h>

typedef struct node 
{
    char *data;   // string data 
    struct node *next;
} LIST;

LIST *head = NULL;

void addTolist(char *s)
{
    LIST *x = (LIST *)malloc(sizeof(LIST));

    x->data = s;
    x->next = NULL;

    // if the LL is empty and the node is added at the beginning
    if(head== NULL)
    {
        head = x;
    }
    else
    {
    // TO add node at the end of LL
    LIST *temp= head;

    while(temp->next!= NULL)   // traverse to the last node of list
    {    
        temp = temp->next;
    }
    temp->next = x;
    }
    
}


// this function is used to initialise the linked list 
void initialize()
{
    addTolist("hello");
    addTolist("world!");
    addTolist("today");
    addTolist("is");
    addTolist("beautiful");
    addTolist("day");
}   

// this function return the head of the linked list.
LIST *getListHeader()
{
    return(head);
}
