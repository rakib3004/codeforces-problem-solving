
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{



int a,k,x;
 int sum=0;
scanf("%d%d%d",&a,&k,&x);


       int i;
       int b[a];

       for(i=0;i<a;i++)
       {

           scanf("%d",&b[i]) ;

       }

        for(i=0;i<a-k;i++)
       {
           sum+=b[i];

       }

       sum+=k*x;

       printf("%d",sum);

   return 0;
}
