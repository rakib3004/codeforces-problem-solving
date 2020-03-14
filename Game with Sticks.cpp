#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

         {

              int a,m,n,i,b,c=0,d;
                 scanf("%d%d",&m,&n);
             b=m*n;


           for(i=0;i<b;i++)

           {

               if(m*n>0)

               {
                  c++;

                  m--;
                  n--;
               }

               else
               {

                   break;
               }
           }

           if(c%2==0)
           {

               printf("Malvika");
           }

           else
           {
               printf("Akshat");

           }
               return 0;
         }

