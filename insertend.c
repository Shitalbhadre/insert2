#include<stdio.h>
void main()
{
     int n,i,num,a[10];
     printf("Enter the number of  elements you want in an array:");
     scanf("%d",&n);

     printf("Enter the array elements:");
     for(i=0; i<n; i++){
        scanf("%d", &a[i]);
     }

     printf("Array elements are:");
     for(i=0; i<n; i++){
        printf("%d\n", a[i]);
     }

     printf("Enter the number which you want to insert at the end:");
     scanf("%d",&num);
     a[n]=num;

     printf("Array after inserting the number:");
     for(i=0; i<=n; i++){
     printf("%d\n", a[i]);
     }
     

}
