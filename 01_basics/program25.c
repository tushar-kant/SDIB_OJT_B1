#include <stdio.h>
int main()
{
  int age;
  
    scanf("%d", &age);
    if(age>18){
        printf("Eligible for vote");
    }
    else if(age == 18){

        printf("Please apply for Voter Id Card");

    }
    else{
        printf("Not eligible");
    }
    return 0;
}