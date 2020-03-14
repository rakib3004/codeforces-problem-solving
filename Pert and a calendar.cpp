
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{



int m,d;
scanf("%d%d",&m,&d) ;

       int a,b,c;

       if(m==4||m==6||m==9||m==11)
       {

    a=30;
       }

       else if(m==2)
       {

           a=28;
       }
       else
       {

           a=31;
       }

       d=(7-d)+1;
       b=a-d;
        c=1;
        c+=b/7;
          if(b%7)
          {

              c++;
          }

          printf("%d",c);

   return 0;
}
