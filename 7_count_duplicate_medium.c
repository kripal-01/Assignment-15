//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
int duplicate(int b[],int n);
int main()
{
	
	int a[10];
int s=	duplicate(a,10);
printf("%d",s);
	return 0;
}
int duplicate(int b[],int n)
{
int i,j,count=0;
printf("enter arry values ");

for(i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
for(i=0;i<n-1;i++)
{
	for(j=i+1;j<n;j++)
	{             
	if(b[i]==b[j])
	{
	count++;
			
	}
           
	}
	
}
return count;
}
