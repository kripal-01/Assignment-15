//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
int smalest(int b[] ,int);
int main()
{

	int n;
	printf("enter no. of values ");
	scanf("%d",&n);
    int arr[n];
	printf("smallest no. is %d\n",smalest(arr,n));
	
	return 0;
}
int smalest(int b[],int no)
{
	int i;
	printf("enter values ");
	for(i=0;i<no;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=1;i<no;i++)
	{
		if(b[0]>b[i])
		b[0]=b[i];
	}
	return b[0];

    }
