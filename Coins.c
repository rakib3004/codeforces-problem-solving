#include<stdio.h>

int main()

{


    int n,s;

    scanf("%d%d",&n,&s);

    int count=s/n;

    if(s%n==0)
    {
            printf("%d",count);

              return 0;
    }

    else
    {


         printf("%d",++count);

    }


    return 0;
}

