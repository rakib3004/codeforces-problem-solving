

#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<string>

using namespace std;

int main()

{



string a,b;
     cin >>a>>b;

     int a1,b1,a2,b2,c1,c2,c,d1,d2;

         a1=((a[0]-'0')*10)+(a[1]-'0');
         a2=((a[3]-'0')*10)+(a[4]-'0');
         c1=a1*60+a2;
         b1=((b[0]-'0')*10)+(b[1]-'0');
         b2=((b[3]-'0')*10)+(b[4]-'0');
         c2=b1*60+b2;

         c=c1+c2;
          c=c/2;
          d1=c/60;
         d2=c%60;

         if(d1>9&&d2>9)
         {

             printf("%d:%d",d1,d2);
         }

           else
           {


            if(d1<10)
         {

             printf("0%d",d1);
         }

         else
       {

           printf("%d",d1);

       }



         printf(":");

            if(d2<10)
         {

             printf("0%d",d2);
         }

            else
       {

           printf("%d",d2);

       }




           }




           return 0;
}

