
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()

{
  int n;
  scanf("%d",&n);
     int i,j;
 long long int a[n];
int b[n]={0};
  for(i=0;i<n;i++)
  {

      scanf("%I64d",&a[i]);

  }

   for(i=0;i<n;i++)
  {

      for(j=i;;j++)
      {

      if(a[i]%2==0)

      {
          a[i]/=2;
          b[i]++;
      }

      else if(a[i]%3==0)

      {
          a[i]*=2;
          a[i]/=3;
          b[i]++;
      }
      else if(a[i]%5==0)
      {

          a[i]*=4;
          a[i]/=5;
          b[i]++;
      }

      else if(a[i]==1)
      {

          break;
      }
      else if(a[i]!=1)
      {

          b[i]=-1;
          break;
      }
      else{break;}

      }
  }


  for(i=0;i<n;i++)
  {

      printf("%d\n",b[i]);
  }
        return 0;

        }
