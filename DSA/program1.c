#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *nextptr;
} * stnode;
void createNode();
void displayNode();
int main()
{
    createNode();
    displayNode();
    return 0;
}
void displayNode()
{
    struct node *tmp;
    while (tmp != NULL)
    {
        printf("%d\n", tmp->data);
        tmp = tmp->nextptr;
    }
}
void createNode()
{
    struct node *fnNode, *tmp;
    int data, i;
    stnode = (struct node *)malloc(sizeof(struct node));
    scanf("%d", &data);
    stnode->data = data;
    stnode->nextptr = NULL;
    tmp = stnode;
}