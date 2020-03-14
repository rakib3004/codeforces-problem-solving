#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  int main()
  {



    int i,n;


      char a[3];
      char b[3];
      int a1=0,b1=0,b2,a2;

      for(i=0;i<3;i++)
      {
        scanf("%d",&a[i]);

          a1+=a[i];
      }


        for(i=0;i<3;i++)
      {
       scanf("%d",&b[i]);

       b1+=b[i];
      }



       scanf("%d",&n);

           a2=a1/5;
           if(a1%5!=0)

           {
            a2++;
           }

               b2=b1/10;
               if(b1%10!=0)

           {
            b2++;
           }



               a2=a2+b2;

               if(a2<=n)

               {
                   printf("YES");
               }

               else

               {
                   printf("NO");
               }

     return 0 ;

  }

