#include<stdio.h>
int main(){

int cho,num1,num2;
int result;
printf("\n 1.addition");
printf("\n 1.subtraction");
printf("\n 1.multiplication");
printf("\n 4.division");
printf("\nEnter the two numbers: ");
scanf("%d %d", &num1, &num2);
printf("\nEnter the choice: ");
scanf("%d", &cho);

switch (cho)
    {
    case 1:
        result = num1 + num2;
        printf(" Addition of %d and  %d is= %d", num1, num2, result);
        break;

    case 2:
        result = num1 - num2;
        printf("subtraction  of %dand   %d is= %d", num1, num2, result);
        break;

    case 3:
        result = num1 * num2;
        printf("multiplication of %d and  %d is= %d", num1, num2, result);
        break;

    case 4:
        result = num1 / num2;
        printf("division of %d  and %d is= %d", num1, num2, result);
        break;

    default:
        printf("not valid ");
        break;
    }
    
}