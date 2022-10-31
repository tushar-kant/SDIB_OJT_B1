#include <stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *newmem,*head;
void main(){
    newmem=(struct node *)malloc(sizeof(struct node));
    if(newmem!=NULL){
        head=newmem;
        printf("enter data");
        scanf("%d",&head->data);
        printf("data:%d\n",head->data);
        head->next=NULL;
    }

}