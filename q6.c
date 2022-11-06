//6. Write a program to calculate factorial of a number

#include<stdio.h>
int main()
{
     int i,n,s=1;
     printf("Enter the value of n\n");
     scanf("%d",&n);
     for(i=1;i<=n;n--)
       {
        s=s*n;

       }
         printf("\nFactorial of n is %d ",s);
         return 0;

}