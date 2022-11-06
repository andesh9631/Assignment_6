//3. Write a program to calculate sum of
// first N odd natural numbers
#include<stdio.h>
int main()
{
    int i=1,n,s=0;
    printf("ENter the any value of n");
    scanf("%d",&n);
    for(i=1;i<=n*2-1;i+=2)
      {
        s=s+i;
        printf("\n Odd natural number is %d ",i);

      }
      printf(" \nSum is odd natural number is %d ",s);
       return 0;

     //OR

    // while(i<=n*2-1)
    //   {
    //     s=s+i;
    //     printf("\nodd natural number is %d ",i);
    //     i+=2;
    //   }
    //       printf("\n Sum is odd even number is %d ",s);
    //       return 0;

        //OR

    // do 
    // {
    //   s=s+i;
    //   printf("\n odd natural number is %d ",i);
    //   i+=2;
    // } 
    //    while(i<=n*2-1);


    //     printf("\n Sum odd natural number is %d ",s);
    //    return 0;
   
}
