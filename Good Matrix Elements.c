
#include<stdio.h>

int main()

{


    int n;

    scanf("%d",&n);

    int i,j;
    int p,m;
    int total=0;
    int a[n][n];

      p=(n-1)/2;
      m=n-1;
    for(i=0;i<n;i++)
    {

      for(j=0;j<n;j++)
      {

          scanf("%d",&a[i][j]);

      }
    }


    for(i=0;i<n;i++)
    {

        total=total+a[i][i]+a[i][m-i]+a[p][i]+a[i][p];
    }

    total=total-(3*a[p][p]);

    printf("%d",total);

    return 0;

}

