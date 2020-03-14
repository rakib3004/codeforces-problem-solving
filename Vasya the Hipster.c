#include<stdio.h>

int main()

{

    int a,b,c,d,m,n;


    scanf("%d%d",&m,&n) ;

    if(m>n)
    {

        a=n;
        b=m;
    }

    else if (m<=n)
    {

        a=m;
        b=n;

    }

    else{}

    c=b-a;
    d=c/2;


    printf("%d %d",a,d);


    return 0;

}


