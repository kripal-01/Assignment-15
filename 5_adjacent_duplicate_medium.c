//5. Write a function to find the first occurrence of adjacent duplicate values in the array. 
//Function has to return the value of the element.
#include<stdio.h>
void duplicate(int b[],int n);
int main()
{
	
	int a[5];
	duplicate(a,5);
	return 0;
}
void duplicate(int b[],int n)
{
int i,j;
printf("enter arry values ");

for(i=0;i<n;i++)
{
	scanf("%d",&b[i]);
}
for(i=0;i<n-1;i++)
{
if(b[i]==b[i+1])
    {

		printf("%d",b[i]);

     	break;      
	}

}
}
