#include<stdio.h>

int main()

         {
           int temp,i,j,sum=0,a[3];


           scanf("%d%d%d",&a[0],&a[1],&a[2]);

           for(i=0;i<3;i++)

           {
               for(j=0;j<3;j++)

               {
                   if(a[i]>a[j])

                   {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
               }
           }

            sum=a[0]-(a[1]+a[2]);

            if(sum>=0)

            {
                printf("%d",sum+1);
            }

           else
           {
               printf("0");
           }
              return 0;
         }

