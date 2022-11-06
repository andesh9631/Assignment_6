//7. Write a program to count digits in a given number

#include<stdio.h>
int main()
{
     int  x,re,count=0;
    printf("Enter the number:");
    scanf("%d",&x);
      while(x)//x!=0
      {
         re=x%10;
         x=x/10;
         count++;


      }
       printf(" %d ",count);
       return 0;




}