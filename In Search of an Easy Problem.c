
#include<stdio.h>

int main()

{

    int n;
    int sum;

    scanf("%d\n",&n);

    int i,a[n];

    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);

    }
    sum=0;
    for(i=0;i<n;i++)

    {

        sum=sum+a[i];
    }

  if(sum==0)
  {
      printf("EASY");
  }

      else
      {

          printf("HARD");
      }

    return 0;
  }
