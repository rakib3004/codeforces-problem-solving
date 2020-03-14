#include<stdio.h>

int main()


         {
          int n;

          scanf("%d",&n);

          int d=n%10;

          if(d<=5)
          {

              printf("%d",n-d);
          }

          else
          {

              d=10-d;

              printf("%d",n+d);

          }


          return 0;


         }
