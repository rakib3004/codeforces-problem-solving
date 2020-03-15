
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

 int gcd(int,int) ;
 int main()
{
      int i,j;

  int n,m;

  scanf("%d%d",&n,&m);

  char  a[n][2*m];

  for(i=0;i<n;i++)

  {
      for(j=0;j<2*m;j++)
      {
    scanf("%c",&a[i][j]);

      }
  }

  for(i=0;i<n;i++)
  {

      for(j=0;j<2*m;j++)
      {

          if(a[i][j]=='C'||a[i][j]=='M'||a[i][j]=='Y')
          {

              printf("#Color");
              return 0;
          }
      }
  }

  printf("#Black&White");
  return 0;

}

