#include<stdio.h>
int main()
{
	int marks;
	printf("enter the marks");
	scanf("%d",&marks);
	if(marks>=90 && marks<=100)
	{
		printf("a grade");	
    }
if(marks>=80 && marks<=90)
    {
    	printf("b grade");
	}
	if(marks>=70 && marks<=80)
	{
		printf("c grade");
	}
	if(marks>=60 && marks<=70)
	{
	printf("d grade");
	}
	else 
	{
		printf("you are failed");
	}
}

