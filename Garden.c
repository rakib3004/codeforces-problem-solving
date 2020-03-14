
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

  int main()
  {

     int n,k;
scanf("%d%d",&n,&k);

   int i,j=0;


    int a[n]={0},b[n]={0};

     int max=0;
    for(i=0;i<n;i++)

    {
        scanf("%d",&a[i]);

    }

for(i=0;i<n;i++)

    {
     if(k%a[i]==0)
         {
             b[j]=a[i];
             j++;
         }
    }

    max=b[0];

    for(i=1;i<j;i++)

    {
        if(b[i]>max)

        {
            max=b[i];
        }
    }

    int y=k/max;
printf("%d",y);

   return 0 ;

  }
