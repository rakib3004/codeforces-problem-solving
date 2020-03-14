
#include<stdio.h>

int main()

         {

          int  n,m,i,j;

          long long int count=0;

       scanf("%d%d",&n,&m);

        int a[m];



               for(i=0;i<m;i++)
               {

                scanf("%d",&a[i]) ;
               }

               int d=1;

               for(i=0;i<m;i++)
               {

                   if(a[i]>=d)
                   {

                       count+=a[i]-d;
                   }

                   else
                   {

                       count+=(n-d)+a[i];
                   }

                   d=a[i];
               }


              printf("%I64d",count);
               return 0;
         }
