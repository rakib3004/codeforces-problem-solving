#include <stdio.h>

int main()
{
   int i,j,n,r;

   scanf("%d",&n);

   r=(n/2)+1;
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     printf("*");
     for(j=1;j<=2*i-1;j++)
       printf("D");
       for(j=2*i;j<n;j++)
        printf("*");
     printf("\n");
   }

   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     printf("*");
     for(j=1;j<=2*i-1;j++)
       printf("D");
        for(j=2*i;j<n;j++)
        printf("*");
     printf("\n");
   }
   return 0;
}

