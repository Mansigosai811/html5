#include<stdio.h>
int main()
{
	int i,j;
	printf("enter the number");
	scanf("%d",&j);
	for(i=1; i<=10; i++)
	{
		printf("%d x %d = %d \n" ,j,i,i*j);
	}
	
}
