
#include<stdio.h>
#include<stdlib.h>


#include<math.h>

int main()

{
  int n;
  scanf("%d",&n);
     int i,j;
  int a[n];

  for(i=0;i<n;i++)
  {

      scanf("%d",&a[i]);

  }

for(i=0;i<n;i++)
  {
      if(a[i]==5||(a[i]==1||a[i]==2||a[i]==4||a[i]==8||a[i]==11))
      {

          printf("NO");
      }

      else
      {
                  printf("YES");


      }
      if(i!=n-1)
      {

          printf("\n");
      }
  }
        return 0;

        }
