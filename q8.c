//8. Write a program to check whether a given number is a Prime number
// or not
#include<stdio.h>
int main()
{
    int n,i,flag=0;
    printf("ENter the nuber:");
    scanf("%d",&n);
    for(i=2;i<n;i++) // i ko 2 se es liye kiye hai ki 1 and n se vo kud devide hoga
        {
            if(n%i==0)
                {
                    flag=1;// flag ke jagah pe koi bhi alphetabet use kar sakte hai
                    break;
                }
        }
          if(flag==1)
            {
                printf("non prime number:");
            }
           else 
               printf("prime number");

        return 0;
}  
