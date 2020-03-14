
#include<stdio.h>
#include<string.h>
#include<string.h>

  int main()
  {


      int n;
      int c=0;
      scanf("%d",&n);
      int a[n];

      int i;

      for(i=0;i<n;i++)
      {

          scanf("%d",&a[i]);

      }

      int max,min;
      max=a[0];
      min=a[0];

      for(i=1;i<n;i++)
      {

          if(a[i]>max)

          {

              max=a[i];
              c++;

          }
          if(a[i]<min)

          {
              min=a[i];
              c++;
          }
      }

                 printf("%d",c);



     return 0 ;

  }
