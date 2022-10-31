#include <stdio.h>
#include<stdlib.h>
#include <conio.h>
#include <process.h>
struct node
{
    int data;
    struct node *next;
} *start = NULL, *head, *t;
int main()
{
    int ch;
    void insert_beg();
    void insert_end();
    void display();
    void delete_beg();
    void delete_end();
    while (1){
        printf("\n1.Insert\n\n2.Delete\n3.Exit\n\n");
        scanf("%d", &ch);
        display();
        switch (ch)
        {
            
        case 1:
            printf("\n1.Insert at beginning\n2.Insert at end\n3.Exit");
            scanf("%d", &ch);
            switch (ch){
            case 1:
                insert_beg();
                break;
            case 2:
                insert_end();
                break;
            case 3:
                exit(0);
            default:
                printf("Wrong Choice!!");
            }
            break;
        case 2:
            printf("\n1.Delete from beginning\n2.Delete from end\n3.Exit");
            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                delete_beg();
                break;
            case 2:
                delete_end();
                break;
            case 3:
                exit(0);
            default:
                printf("Wrong Choice!!");
            }
            break;
        case 3:
            exit(0);
        }
    }
    return 0;
}
void insert_beg()
{
    int num;
    t = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &num);
    t->data = num;
    if (start == NULL) {
        t->next = NULL;
        start = t;
    }
    else{
        t->next = start;
        start = t;
    }
}
void insert_end(){
    int num;
    t = (struct node *)malloc(sizeof(struct node));
    printf("Enter data:");
    scanf("%d", &num);
    t->data = num;
    t->next = NULL;

    if (start == NULL) {
        start = t;
    }
    else{
        head = start;
        while (head->next != NULL)
            head = head->next;
        head->next = t;
    }
}
void display()
{
    if (start == NULL){
        printf("List is empty!!");
    }
    else{
        head = start;
        printf("The linked list is:\n");
        while (head != NULL)
        {
            printf("%d->", head->data);
            head = head->next;
        }
    }
}
void delete_beg(){
    if (start == NULL){
        printf("The list is empty!!");
    }
    else{
        head = start;
        start = start->next;
 
    }
}
void delete_end(){
    if (start == NULL){
        printf("The list is empty!!");
    }
    else
    {
        head = start;
        while (head->next->next != NULL)
            head = head->next;
        t = head->next;
        head->next = NULL;
    }
}
