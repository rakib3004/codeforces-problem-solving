
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

      {


 int i,n,count=1;

       scanf("%d",&n);

    char a[n];

 scanf("%s",a);




 if(a[0]=='0')

 {

 }

 else
 {

     for(i=1;i<n;i++)
     {

         if(a[i]=='0')

         {
             count++;
             break;
         }

         else

         {
             count++;
         }
     }
 }

 printf("%d",count) ;
        return 0;

          }

