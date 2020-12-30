#include<stdio.h>
#include<stdlib.h>
#include "list.h"
#include "btree.h"

int main(int argc, char *argv[])
{
    initialize();
    LIST *h = getListHeader();
    Tree *root =NULL;

    while(h!=NULL)
    {
        addToTree(&root,h->data);
        h= h->next;
    }
    int i;
    for(i=0;i<argc;i++)
    {
    printf("\n user wants to search %s in our tree\n",argv[i]);

    int val=searchkey(root,argv[i]);
    if(val==1)
    {
        printf("\n %s found in the tree and strcmp val is %d \n",argv[i],val);
    }
    else
    {
        printf("\n %s is not found in the tree and strcmp val is %d \n",argv[i],val);   
    }
    
    printf("\n");
    }
    return(0);

}