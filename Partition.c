#include<stdio.h>

int main()


{



    int n;

    scanf("%d",&n);

    int i,sum,sum1=0,sum2=0;

    int  a[n];

    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
        if(a[i]<0)
        {

            sum2+=a[i];
        }
        else
        {

            sum1+=a[i];

        }
    }


    sum=sum1-sum2;

    printf("%d",sum);

    return 0;
}

