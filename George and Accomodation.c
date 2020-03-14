
#include<stdio.h>


int main()


{

    int i,n,count=0;

    scanf("%d",&n);

    int a[n][2],b[n];


    for(i=0;i<n;i++)

    {

        scanf("%d%d",&a[i][0],&a[i][1]);
        b[i]=a[i][1]-a[i][0];

        if(b[i]>1)
        {

            count++;
        }
    }

    printf("%d",count);


    return 0;
}

