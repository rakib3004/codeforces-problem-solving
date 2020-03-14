

#include<stdio.h>

int main()

{

    int m,n,k,i,count=0;

    scanf("%d%d%d",&m,&n,&k);

    for(i=0;i<k;i++)
    {

        if(m>0&&n>0)
        {

            count=count+(2*(m-1)+2*(n-1));

            m=m-4;
            n=n-4;
        }
        else
        {
            return 0;
        }

    }

    printf("%d",count);


    return 0;
}

