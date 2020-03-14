
#include<stdio.h>

int main()

         {

          int n;
          int i,j;

          scanf("%d",&n);

          int a[n],pk[n];

          a[0]=1;
          a[1]=1;

          for(i=2; ;i++)
          {
              a[i]=a[i-1]+a[i-2];

              if(a[i]>n)
              {
                  break;
              }


          }
          j=1;
          for(i=1;i<=n;i++)
          {

              if(i==a[j])
              {

                  printf("O");
                      j++;
              }
              else

                {

                   printf("o");

                }



          }


          return 0;

         }
