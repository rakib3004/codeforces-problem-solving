
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {

 int i,n,k,m;



 scanf("%d%d",&n,&m);

 if(m>n)
 {

     printf("-1");
     return 0;

 }

 k=(n/2)+(n%2);

 for(i=k;i<=n;i++)
 {

     if(i%m==0)
     {

         printf("%d",i);
         return 0;
     }


 }

            printf("-1");
               return 0;
         }
