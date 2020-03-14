#include<stdio.h>

int main()

{


    int i,j;
    int n;

    scanf("%d",&n);

    char a[n][n];

    int count=0;
    for(i=0;i<n;i++)
    {



            scanf("%s",&a[i]);



    }

    if(n<3)
    {

        printf("0");
        return 0;
    }

    for(i=1;i<n-1;i++)
    {
         for(j=1;j<n-1;j++)
         {

            if(a[i][j]==a[i-1][j-1]&&a[i][j]==a[i-1][j+1]&&a[i][j]==a[i+1][j-1]&&a[i][j]==a[i+1][j+1]&&(a[i][j]=='X'))

            {

                count++;
            }
         }



    }

    printf("%d",count);
        return 0;


}

