
#include<stdio.h>
#include<string.h>
#include<string.h>

  int main()
  {


      int i,n,a;

      scanf("%d",&n);



      for(i=1;i<150;i++)

      {
           a=(i*(i+1))/2;

           n-=a;

           if(n<0)

           {
               printf("%d",i-1);
               return 0;
           }

      }



     return 0 ;

  }
