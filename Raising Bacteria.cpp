 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
{

   int i,n;
   int a;
   scanf("%d",&n) ;

   int count =0;
   for(i=0;i<32;i++)
   {

       a=pow(2,i) ;
       if(n==a)
       {
          count++;
          break;

       }
       else if (n<a)
       {

           count++;
           n=n-(a/2);
           i=-1;
       }

       else
       {

           continue;
       }
   }

   printf("%d",count) ;
    return 0;

}
