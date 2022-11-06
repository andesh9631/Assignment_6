//5. Write a program to calculate sum of cubes of first N natural numbers

#include<stdio.h>
int main()
{
    int i, n,s=0;
    printf("ENter the value of n");
    scanf("%d",&n);

    for(i=1,s=0;i<=n;i++)
      {
          s+=i*i*i;   // s=s+i*i*i;
          printf("\n natural number is %d ",i);

      }
      printf("\n Sum of cubes is %d ",s);
      return 0;
}