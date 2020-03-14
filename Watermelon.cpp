
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {

      int n;

      scanf("%d",&n);

      if(n%2!=0)
      {

          printf("NO");

          return 0;
      }
      int a,b,i;

      a=n/2;
      b=n/2;


          G:
      if(a%2==0&&b%2==0)
      {

          printf("YES") ;

          return 0;
      }

      else
      {

          a--;
          b++;

          if(a<=0)

              {
                 goto H;
              }

              else
              {

                  goto G;
              }


      }

       H:
           printf("NO");

               return 0;
         }
