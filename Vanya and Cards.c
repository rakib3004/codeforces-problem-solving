
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

  int main()
  {

     int n,m;
       int flag=0;
     scanf("%d%d",&n,&m);

   int i,j;


    int a[n];
     int y;
    for(i=0;i<n;i++)

    {
        scanf("%d",&a[i]);
        flag+=a[i];
    }

    int c=abs(flag) ;

    if(c%m==0)
    {

     printf("%d",c/m);
    }

     else
     {

         y=(c/m)+1;

         printf("%d",y);
     }


   return 0 ;

  }
