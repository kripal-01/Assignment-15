//3. Write a function to sort an array of any size. (TSRN)

#include<stdio.h>
void sorit(int b[] ,int);
int main()
{

	int n;
	printf("enter no. of values ");
	scanf("%d",&n);
    int arr[n];
sorit(arr,n);
	
	return 0;
}
void sorit(int b[],int no)
{
	int i,j,temp=0;
	printf("enter values ");
	for(i=0;i<no;i++)
	{
		scanf("%d",&b[i]);
	}
	for(i=0;i<no-1;i++)
	{
		for(j=i+1;j<no;j++)
	{
		if(b[i]>b[j])
		{
			temp=b[i];
				b[i]=b[j];
				b[j]=temp;
		}
	
	}
	}

	for(i=0;i<no;i++)
	printf("%d ",b[i]);

    }
