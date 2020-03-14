#include<stdio.h>
 #include<stdio.h>


int main()

         {

        int i,j,m,n;
            scanf("%d%d",&m,&n) ;
        int a[m],b[n];


        for(i=0;i<m;i++)
        {

        scanf("%d",&a[i]);

        }

        for(i=0;i<n;i++)
        {

            scanf("%d",&b[i]);
        }

        for(i=0;i<m;i++)

        {
            for(j=0;j<n;j++)

            {

               if(a[i]==b[j])

               {

                 printf("%d ",a[i]);






               }

            }
        }

              return 0;
         }

