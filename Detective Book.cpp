
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{
     int n;

     scanf("%d",&n);

     int a[n];

     int i;
     int x=0,c=0;

     for(i=0;i<n;i++)
     {

         scanf("%d",&a[i]);

         if(a[i]>x)
         {

             x=a[i];
         }

         if(x==i+1)
         {

             c++;
         }

     }

     printf("%d",c);

   return 0;
}
