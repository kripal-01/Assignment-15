//9. Write a function in C to merge two arrays of the same size sorted in descending 
//order.
#include <stdio.h>
int main()
{
    int i,j,n1,n2,n3;            //Array Size Declaration
    int a[1000], b[1000], c[2000];
    printf("Enter the size of first array: ");
    scanf("%d",&n1);
    printf("Enter the array elements: ");
    for(i = 0; i < n1; i++)      
       scanf("%d", &a[i]);
    printf("Enter the size of second array: ");
        scanf("%d",&n2);
    printf("Enter the array elements: ");
    for(i = 0; i < n2; i++)      
       scanf("%d", &b[i]);
    n3 = n1 + n2;
    for(i = 0; i < n1; i++)
       c[i] = a[i];
    for(i = 0; i < n2; i++)     
        c[i + n1] = b[i];
        
    printf("The merged array: ");
    for(i = 0; i < n3; i++)
        printf("%d ", c[i]);        //Print the merged array
    
    printf("\nFinal array after sorting: ");
    for(i = 0; i < n3; i++){
        int temp=0;
        for(j = i + 1; j < n3; j++) {
            if(c[i] < c[j]) {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }   
    for(i = 0; i < n3 ; i++)       //Print the sorted Array 
        printf(" %d ",c[i]);
    return 0;   
}
