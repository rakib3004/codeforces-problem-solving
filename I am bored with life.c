
#include<stdio.h>

int main()

{

    int i,n,m,p;
        int sum=1;

    scanf("%d%d",&m,&n);

    if(m<n)

    {
        p=m;
    }

    else
    {

      p=n;

    }


    for(i=1;i<=p;i++)
    {

        sum*=i;


    }



     printf("%d",sum);
    return 0;

}


