#include<stdio.h>
int main(){
    register int n;
    scanf("%d",&n);
    for (int i=1;i<n;i++){
        printf("%d\n",i);
    }
}