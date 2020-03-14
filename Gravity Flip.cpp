
#include<stdio.h>

int main()

         {

          int  n,m,i,j;



       scanf("%d",&n);

        int a[n];



               for(i=0;i<n;i++)
               {

                scanf("%d",&a[i]) ;
               }

               int d=1;

               for(i=0;i<n;i++)
               {
for(j=i+1;j<n;j++)

{
    if(a[j]<=a[i])

    {

        m=a[j];
        a[j]=a[i];
        a[i]=m;
    }
}
               }


               for(i=0;i<n;i++)
               {


               printf("%d ",a[i]);

               }

               return 0;
         }
