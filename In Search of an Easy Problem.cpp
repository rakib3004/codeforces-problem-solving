
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {

      int n;
      scanf("%d",&n);

      int a[n];

      int  i;

      for(i=0;i<n;i++)
      {

          scanf("%d",&a[i]) ;
      }

      for(i=0;i<n;i++)
      {
         if(a[i]==1)
         {

            printf("HARD");
            return 0;
         }

      }

      printf("EASY");

return 0;
         }
