#include<stdio.h>

int main()

         {
           int i,p,n;
           int d=0;

           scanf("%d",&n);

           int a[n],b[n];
           for(i=0;i<n;i++)
           {

           scanf("%d%d",&a[i],&b[i]);

           }

           scanf("%d",&p);

           for(i=0;i<n;i++)
           {


               if(p>=a[i]&&p<=b[i])
               {

                   n=n- i;
               }
           }

            printf("%d",n);

            return 0;
         }

