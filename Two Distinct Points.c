
#include<stdio.h>

int main()
{

    int i,n;
        scanf("%d",&n);
    int   a[n][4];

    for(i=0;i<n;i++)
    {

        scanf("%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);
    }

    for(i=0;i<n;i++)
{


    printf("%d ",a[i][0]);

    if(a[i][3]==a[i][0])
    {

        printf("%d\n",a[i][2]);

    }

    else
    {
                printf("%d\n",a[i][3]);


    }

}


return 0;

}

