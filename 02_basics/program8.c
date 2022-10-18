#include<stdio.h>
int main(){
    int m1,m2,m3;
    scanf("%d  %d %d", &m1, &m2, &m3);
    float sum=m1+m2+m3;
    printf("the average mark is %f\n",sum/3);
    float persentage=(sum/300)*100;
    printf("the persentage is %f \n",persentage);
    if(m1>75 && m2>75 && m3>75){
        printf("\nDistinction");
    }
    else if(m1>60 && m2>60 && m3>60){
        printf("\n1st class");
    }
    else if(m1>30 && m2>30 && m3>30){
        printf("\nPass");
    }
    else{
        printf("\nfail");

    }

    
}