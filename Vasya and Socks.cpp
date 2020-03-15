
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


 int main()
{

 int n,m;
 scanf("%d%d",&n,&m);

 int i,a;

 for(i=1;i<100;i++)
 {

     a=m*i;

     if(n>=a)
     {

         n++;
     }

     else
        {


           break;

     }

 }
printf("%d",n);

   return 0;

}
