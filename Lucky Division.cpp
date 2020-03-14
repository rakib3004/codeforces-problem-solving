
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {


   int a[16]={4,7,44,47,74,77,444,447,474,477,744,747,774,777,4444};
   int i,n;

   scanf("%d",&n);

   for(i=0;i<16;i++)
   {

       if(n<a[i])
       {

           printf("NO");
           return 0;
       }

       else if(n%a[i]==0)
       {

           printf("YES");
           return 0;
       }

       else{continue;}
   }





return 0;
         }
