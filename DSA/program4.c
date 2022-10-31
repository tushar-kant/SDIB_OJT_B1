#include<stdio.h>
#include<stdlib.h>
struct  Node
{
    int data;
    struct Node *next;
};
void fun2(struct Node *start)
{
    if(start == NULL)
    {
        return;
    }
    fun2(start->next);
    printf("%d",start->data);
    if(start->next !=NULL)
    {
        fun2(start->next->next);
    }
    printf("%d",start->data);
}
void push(struct Node** head_ref,int new_data)
{
    struct Node* new_node;
    new_node=(struct Node*)malloc(sizeof(struct Node));
    new_node->data=new_data;
    new_node->next=(*head_ref);
    (*head_ref)=new_node;
}
int main()
{
    struct Node *head = NULL;

    push(&head, 5);

    push(&head, 4);

    push(&head, 3);

    push(&head, 2);

    push(&head, 1);
    fun2(head);
    return 0;
}