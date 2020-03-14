#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

  int main()
  {

     int n,m;
       int flag;
     scanf("%d%d",&n,&m);

   int i,j;
            if(m==3)

            {
                 printf("YES");
           return 0;
            }
            if(n==2&&m==5)

            {
                 printf("NO");
           return 0;
            }
   for(i=2;i<=sqrt(m);i++)
   {

       if(m%i==0)
       {

           printf("NO");
           return 0;
       }
   }




       int k;

       n=n+1;

       for(i=n;  ;i++)

       {

               if(flag==1)

               {
                i--;
                k=i;
                break;
               }
           for(j=2;j<=sqrt(i);j++)

           {

               if(i%j==0)
               {
                   flag=0;
                   break;
               }
               else
               {

                   flag=1;

               }
           }
       }

       if(k==m)

       {
           printf("YES");

       }

   else

   {
       printf("NO");
   }

   return 0 ;

  }

