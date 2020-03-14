#include<stdio.h>
#include<string.h>
#include<string.h>

  int main()
  {


      int n;
      int a,b,c;
      scanf("%d",&n);


      if(n>=0)
      {

          printf("%d",n);
          return 0;
      }

      a=n/10;
      c=n%10;
      b=n/100;
      b=b*10;
      b=b+c;



      if(b>a)
      {

          printf("%d",b);
      }

      else
      {

          printf("%d",a);

      }


     return 0 ;

  }

