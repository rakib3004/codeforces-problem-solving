
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {


  int i,n,k,p;

  scanf("%d",&n);




  for(i=0,p=1;i<n;i+=2,p++)
  {
   if(i+1==n)
   {

       if(p%2==1)

       {
           printf("a");
       }

       else{ printf("b");}

       }

       else
       {
          if(p%2==1)

       {
           printf("aa");
       }

       else{ printf("bb");}

       }

       }






return 0;
         }
