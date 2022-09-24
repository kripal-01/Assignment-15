//Array and Functions in C Language
//1. Write a function to find the greatest number from the given array of any size. (TSRS)

#include<stdio.h>
int greatest(int b[],int no);
int main()
{

	int n;
	printf("enter no. of values ");
	scanf("%d",&n);
    int arr[n];
	printf("greatest no. is %d\n",greatest(arr,n);
	
	return 0;
}
int greatest(int b[],int no)
{
	int i;
	printf("enter values ");
	for(i=0;i<no;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<no;i++)
	{
		if(b[0]<b[i])
		b[0]=b[i];
	}
	return b[0];

    }
