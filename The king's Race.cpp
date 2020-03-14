
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{

     long long int n;
     scanf("%lld",&n) ;
     long long int x,y;

     scanf("%lld%lld",&x,&y) ;


     long double b=sqrt(abs(x-n)+abs(y-n));
     long double w=sqrt(abs(x-1)+abs(y-1));



     if(w<=b)
     {

         printf("White");
     }

     else
     {

         printf("Black");
     }
   return 0;
}
