
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{


    int a;
   scanf("%d",&a);

   if(a>=1&&a<=10)
   {

       printf("0");
   }
   else if((a>=11&&a<=19)||a==21)
   {

       printf("4");
   }
     else if(a==20)

     {
         printf("15");
     }
     else
     {

         printf("0");
     }
  return 0;
}
