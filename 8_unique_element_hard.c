//8. Write a function in C to print all unique elements in an array.
#include <stdio.h>
void uniqueEle(int array[], int n)
{
	int i,j;
  for(i=0;i<n;i++)
  {
  	
  		int flag=0;
  	for(j=0;j<n;j++)
  	{
  		if(i!=j)
  		{
  			  
  	if(array[i]==array[j])  
  	flag=1;
	    }	
	}

  	if(flag!=1)
  	printf("%d ",array[i]);
	}
	
  
   
}
int main(){
   int n,i;
   printf("\nEnter no: of elements : ");
   scanf("%d",&n);
   int array[n];
   printf("\nenter the array elements : ");
   for(i = 0; i < n; i++){
      scanf("%d",&array[i]);
   }
   uniqueEle(array, n);
   return 0;
}
