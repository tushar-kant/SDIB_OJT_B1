#include<stdio.h>
#include<stdlib.h>
void *malloc(size_t size);
int main(){
    int *ptr;
    ptr=(int*)malloc(5*sizeof(int));
    
    printf("%p",ptr);
}