#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main ()

{

   int x,y,z,t1,t2,t3,e,s;

   scanf("%d%d%d%d%d%d",&x,&y,&z,&t1,&t2,&t3);

   e = abs(x-y)*t1;
   s=t3*3+t2*(abs(x-y)+abs(x-z)) ;


   if(e>=s)
   {

       printf("YES");
   }

   else
   {

       printf("NO");
   }

   return 0;
}

