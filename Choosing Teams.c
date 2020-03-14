
#include<stdio.h>
#include<string.h>
#include<string.h>

  int main()
  {


      int i,n,k;
      int b=0,c;
      scanf("%d%d",&n,&k);

      int a[n];
        c=5-k;
      for(i=0;i<n;i++)

      {
          scanf("%d",&a[i]);
        if(a[i]<=c)
        {

            b++;
        }
      }

     printf("%d",b/3);

     return 0 ;

  }
