
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

         {

              int n,a,b,c,sum=0,d;
                 scanf("%d%d",&a,&b);
              n=a;

              sum=a;

              if(b>a)


              {
                  printf("%d",sum);

                  return 0;
              }

              while(n--)
              {

                  c=a/b;
                    d=a%b;
                  sum+=c;

                  a=c+d;
                   c+=d;
                  if(c<b)
                  {
                    break;
                  }
              }

      printf("%d",sum);

               return 0;
         }
