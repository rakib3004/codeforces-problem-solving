#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  int main()
  {


      int i,n,p,s=0;

      scanf("%d",&n);

      char a[n];
      char b[n];

      scanf("%s%s",a,b);

      for(i=0;i<n;i++)
      {

        p=abs(a[i]-b[i]);

        if(p>5)

        {
            p=10-p;
        }

        s+=p;
      }


      printf("%d",s) ;
     return 0 ;

  }

