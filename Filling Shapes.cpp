
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {

      long long int count=0;
      int n;
      scanf("%d",&n) ;

      if(n%2)
      {

          printf("0");
           return 0;
      }

      else{


        count =pow(2,(n/2));

      }

       printf("%I64d",count) ;
return 0;
         }
