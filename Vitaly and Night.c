
#include<stdio.h>

int main()

{



    int i,j;
    int m,n;
       scanf("%d%d",&n,&m);

    int a[n][2*m];

    for(i=0;i<n;i++)
    {

        for(j=0;j<2*m;j++)
        {

            scanf("%d",&a[i][j]);
        }
    }


    int count=0;

    for(i=0;i<n;i++)
    {

        for(j=0;j<2*m;j=j+2)
        {
            if(a[i][j]==0&&a[i][j+1]==0)
            {

               continue;
            }

            else
                {

                  count++;
                }

        }
    }

    printf("%d",count);


    return 0;
}



