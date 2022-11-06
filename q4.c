//4. Write a program to calculate sum of squares of 
//first N natural numbers
#include<stdio.h>
int main()
{
  int i,s=0,n;
  printf("Enter the any value of n");
  scanf("%d",&n);
  for(i=1,s=0;i<=n;i++)
    {
          
          s+=i*i;  //s=s+i*i;

          printf("\n N natural number s %d ",i);

    }
       
       printf("\nSum is %d ",s);
       return 0;


}