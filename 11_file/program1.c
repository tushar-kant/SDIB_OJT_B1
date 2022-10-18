#include<stdio.h>
int main(){
    FILE *fp;
    fp=fopen("hello.txt","w");
    if(fp==NULL){
        printf("file not created");

    }else{
        printf("file created successfully");
    }
}   