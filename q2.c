//2. Write a program to calculate sum 
//of first N even natural numbers
#include<stdio.h>
int main()
{
    int i,n,s=0;
    printf("ENter the any value of n");
    scanf("%d",&n);
    for(i=2;i<=n*2;i+=2)
      {
        s=s+i;
        printf("\n Even natural number is %d ",i);
       // printf("\nEven natural number is %d of sum even natural number is %d  ",i,s);
      }
      printf("\n Sum of Even natural number is %d ",s);
      return 0;
}