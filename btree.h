#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct treenode
{
    char *data;  
    struct treenode *lchild;
    struct treenode *rchild;
} Tree;


void addToTree(Tree **root, char *s)
{
    if(*root== NULL)
    {
        Tree *x;
        x= (Tree *)malloc(sizeof(Tree));
        x->data = s;
        x->lchild= NULL;
        x->rchild= NULL;
        printf(" adding node with val %s \n", s);
        *root = x;
        return;
    }

    Tree *ptr= *root;
    int val = strcmp(s,ptr->data);

    // s and ptr data is same
    if(val==0)
    {
        return;
    }
    else if(val<0)    // if s< ptr data
    {
        addToTree(&(ptr->lchild),s);
    }
    else               // if s> ptr data
    {
        addToTree(&(ptr->rchild),s);
    }
}
int searchkey(Tree *root, char *s)
{   
    if(root==NULL)
    {
        return(-1);
    }

    int val = strcmp(s,root->data);

    if(val==0)
    {   
        return(1);
    }
    else if(val>0)
    {
        return(searchkey(root->rchild,s));
    }
    else
    {
        return(searchkey(root->lchild,s));
    }
}