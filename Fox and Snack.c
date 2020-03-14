#include<stdio.h>


int main()


{
    int i,j;

    int m,n;
    int count =0;
    scanf("%d%d",&m,&n);

    char a[m][n];

    for(i=0;i<m;i++)


    {

        for(j=0;j<n;j++)
        {

            a[i][j]='#';
        }
    }

    for(i=1;i<m;i=i+2)
    {
        if(count%4==0)
        {

            for(j=0;j<n-1;j++)
            {

                a[i][j]='.';
            }
            a[i][n-1]='#';
            count=count+2;
        }

        else {

           for(j=1;j<n;j++)
            {

                a[i][j]='.';
            }
            a[i][0]='#';
            count=count+2;

        }

    }



    for(i=0;i<m;i++)
    {
       for(j=0;j<n;j++)
       {

           printf("%c",a[i][j]);
       }
      printf("\n");

    }



      return 0;

}

