#include<stdio.h>  
int fib(int);  
int main()  
{  
    int noofterm=5,i; 
    for(i = 1; i <= noofterm; i++){  
        printf("%d\n",fib(i));  
    }
}  
int fib(int num)  
{  
    if(num == 1)  
        return(0);  
    else if(num == 2 || num == 3)  
        return(1);  
    else  
        return(fib(num-1)+fib(num-2));  
}  