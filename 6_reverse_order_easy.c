//6. Write a function in C to read n number of values in an array and display it in reverse 
//order.
#include<stdio.h>
void rev(int b[],int);
int main()
{
	int a[5];
	rev(a,5);
	return 0;
}
void rev(int b[],int n)
{
	int i;
	printf("enter 5 array values ");
	for(i=0;i<5;i++)
	{
		scanf("%d ",&b[i]);
	}
	for(i=4;i>=0;i--)
	{
		printf("%d ",b[i]);
	}
}
