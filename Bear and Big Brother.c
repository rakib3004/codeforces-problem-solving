#include<stdio.h>

int main()

{

    int i,count=0;

    int a,b;

    scanf("%d",&a);
    scanf("%d",&b);
    for(i=0;i<100;i++)
    {

        if (a<=b)
        {

            a=a*3;
            b=b*2;
            count++;
        }
   else
   {
         break;
   }

    }



   printf("%d",count);




}
