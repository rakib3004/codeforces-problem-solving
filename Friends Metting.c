
#include<stdio.h>

int main()

{
        int a,b;

        int temp;

        int c,d;

        scanf("%d%d",&a,&b);

        d=a+b;
        c=d/2;

        if(a>b)
        {
            temp=a;
            a=b;
            b=temp;
        }

        a=c-a;

         a=(a*(a+1))/2;

            b=b-c;
            b=(b*(b+1))/2;


        d=a+b;

        printf("%d",d);

        return 0;

}
