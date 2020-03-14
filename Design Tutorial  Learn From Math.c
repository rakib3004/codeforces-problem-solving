
#include<stdio.h>

int main()


{
    int n;
    scanf("%d",&n);

    int a,b;

    a=n/2;
    b=n/2+(n%2);


    Nacl:
        if((a%2==0||a%3==0||a%5==0||a%2==7)&&(b%2==0||b%3==0||b%5==0||b%2==7)&&a!=5&&b!=5)

        {

            printf("%d %d",a,b);
        }

        else

        {

            b++;
            a--;
            goto Nacl;
        }

        return 0;
}
