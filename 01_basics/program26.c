#include<stdio.h>  
  
int main()  
{  
    int ram, shyam, ajay;
     scanf("%d%d%d", &ram, &shyam, &ajay);
    if(ram <= shyam && ram <= ajay)  
    {  
        printf("Ram is the youngest");  
    }  
    if(shyam <= ram && shyam <= ajay)  
    {  
        printf("Shyam is the youngest");  
    }  
    if(ajay <= ram && ajay <= shyam)  
    {  
        printf("Ajay is the youngest");  
    }  
  
    return 0;  
}