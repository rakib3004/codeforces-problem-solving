
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

  int main()
  {

     int n;
scanf("%d",&n);

   int i,j;


    int a[n][2];
    int b[n] ;
     int y;
    for(i=0;i<n;i++)

    {
        scanf("%d%d",&a[i][0],&a[i][1]);
       b[i]=a[i][0]+a[i][1];
    }

   int m=b[0] ;

   for(i=1;i<n;i++)
   {

   if(b[i]>m)

   {
       m=b[i];
   }

   }


   printf("%d",m);



   return 0 ;

  }
