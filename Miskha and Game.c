
#include <stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
    int i,n,flag=0,m=1,c=1;
    scanf("%d",&n);

    int a[n][2];

    for(i=0;i<n;i++)
    {

        scanf("%d%d",&a[i][0],&a[i][1]);
    }

    for(i=0;i<n;i++)

    {
        if(a[i][0]>a[i][1])
        {
            m++;
            continue ;
        }
      else if (a[i][0]<a[i][1])
        {
          c++;
          continue;
        }
        else
            {
            c=c;
        m=m;
            }



    }

         if(m>c)
         {

          printf("Mishka")  ;

         }
         else if(c>m)
         {

             printf("Chris");

         }

         else
            {
             printf("Friendship is magic!^^");

            }

    return 0;
}
