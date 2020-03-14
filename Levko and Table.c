
#include<stdio.h>

int main()

{
  int n,k;

  scanf("%d%d",&n,&k);

  int a[n][n];

  int i,j;

  for(i=0;i<n;i++)
  {

      for(j=0;j<n;j++)
      {

       printf("%d ", a[i][j]= (i==j) ? k : 0) ;

      }
      printf("\n");

  }

   return 0;
}
