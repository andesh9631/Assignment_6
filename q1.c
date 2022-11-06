//1. Write a program to calculate sum of first N natural numbers

#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("Enter the any number of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
       {
         s=s+i;
       // printf(" \n natural number is %d of sum is %d ",i,s);
         printf("\n natural number is %d ",i);
        }
        printf("\nSum is %d ",s);
      return 0;

}