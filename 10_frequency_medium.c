//10. Write a function in C to count the frequency of each element of an array.
#include <stdio.h>

void main()
{
    int arr1[10]={2,2,3,3,3,4,6,22,5,3}, fr1[24]={0};
    int n, i, j, ctr;
for(i=0;i<10;i++)
fr1[arr1[i]]++;

for(i=0;i<24;i++)
{
	if(fr1[i]!=0)
	printf("%d---->%d\n",i,fr1[i]);
}
}


