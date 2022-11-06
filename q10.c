//10. Write a program to reverse a given number
#include<stdio.h>
int main()
{
     int a,b,c,re,x;
     printf("Enter the value of x:");
     scanf("%d",&x);
     while(x)
       {
          re=x%10;
          x=x/10;
          b=x%10;
          x=x/10;
          c=x%10;
          x=x/10;
       }
         printf(" %d ",re*100+b*10+c);
         
         return 0;
}