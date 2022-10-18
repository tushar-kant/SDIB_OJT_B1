#include<stdio.h>
int greatestNumber(int a,int b, int c)
{
	int max=0;
	if(a>b && a>c)
		max=a;
	else if(b>a && b>c)
		max=b;
	else
		max=c;
	return max;
}

int main()
{
	int a,b,c;
	
	printf("Enter three numbers: ");
	scanf("%d%d%d",&a,&b,&c);
	printf("greatest number: %d\n",greatestNumber(a,b,c));
	
	return 0;
}