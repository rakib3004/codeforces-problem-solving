
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
       int a,b;

       scanf("%d%d",&a,&b);

       int i;

       for(i=1;i<1000000000;i+=2)

       {
           a-=i;
           if(a<0)

           {
               printf("Vladik");
               return 0;
           }

           b-=(1+i);

           if(b<0)

           {

               printf("Valera");
               return 0;
           }
       }

        return 0;

        }
