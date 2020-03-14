
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  int main()
  {

        int a[3];

        int i;
        for(i=0;i<3;i++)
        {

            scanf("%d",&a[i]);
        }
         Physics:
       if((a[0]+1<=a[1])&&(a[0]+2<=a[2]))
          {

           printf("%d",3*(a[0]+1)) ;
          }

          else{

              a[0]--;

       goto Physics;
          }


     return 0 ;

  }
