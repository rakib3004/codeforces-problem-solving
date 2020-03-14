
#include<stdio.h>

int main()

{

    int i,j,n;
    scanf("%d",&n);
    int a[n][3];
    scanf("%d%d",&a[0][0],&a[0][1]);
    a[0][2]=a[0][0]+a[0][1];

    for(i=1;i<n;i++)
    {

        scanf("%d%d",&a[i][0],&a[i][1]);

        a[i][2]=a[i-1][2]+a[i][1]-a[i][0];
    }


    int max=a[0][2];

    for(i=1;i<n;i++)

    {
        for(j=i+1;j<n;j++)
        {

            if(a[i][2]>max)

            {
                max=a[i][2];
            }
        }
    }

    printf("%d",max);

    return 0;
}
