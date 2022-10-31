#include<stdio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node*next;
};
void moveToFront(struct Node** head_ref)
{
    if(*head_ref ==NULL || (*head_ref)->next==NULL)
    {
        return;
    }
    struct Node* secLast=NULL;
    struct Node* last=*head_ref;
    while(last->next!=NULL)
    {
        secLast=last;
        last=last->next;
    }
    secLast->next=NULL;
    last->next=*head_ref;
    *head_ref=last;
}
void push(struct Node** head_ref,int new_data)
{
    struct Node* new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
void printList(struct Node*node)
{
    while(node !=NULL)
    {
        printf("%d",node->data);
        node=node->next;
    }
}
int main()
{
    struct Node *start = NULL;

    push(&start, 5);

    push(&start, 4);

    push(&start, 3);

    push(&start, 2);

    push(&start, 1);
    printList(start);
    moveToFront(&start);
    printList(start);
    return 0;
}