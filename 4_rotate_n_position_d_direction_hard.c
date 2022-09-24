//4. Write a function to rotate an array by n position in d direction. The d is an indicative 
//value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
//d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

#include<stdio.h>
void rot(int b[],int n,int d)
{
	int temp,i,j;
	printf("enter values of array  ");
	
	for(i=0;i<n;i++)
	{
		
		scanf("%d",&b[i]);
	}

    int arr[n];
    for(i=0;i<n;i++)
    {
    	arr[i]=b[i+d];
	}
	for(i=0;i<d;i++)
	{
	arr[n-d+i]=b[i];
	
	}
	
    for(i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}	
}
int main()
{
	int n;
	printf("enter value of n ");
	scanf("%d",&n);
	int a[n],d;
    printf("enter direction d ");
	scanf("%d",&d);
	rot(a,n,d);
	return 0;
}
