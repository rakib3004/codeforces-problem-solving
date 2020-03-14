
#include<stdio.h>
 #include<string.h>
  #include<stdlib.h>
  #include<math.h>
int main()

         {
           int i,j,n;
           scanf("%d",&n);
            int temp,count=0;
           char a[n],b[n/2];

           for(i=0;i<n;i++)
           {

               scanf("%d",&a[i]);
           }

           for(i=0;i<n;i++)
           {

               for(j=0;j<n;j++)

               {

                   if(a[i]>a[j])

                   {
                       temp=a[i];
                       a[i]=a[j];
                       a[j]=temp;
                   }
               }
           }

           for(i=0,j=0;i<n,j<n/2;i=i+2,j++)

           {
               b[j]=a[i]-a[i+1];
               count=count+b[j];
           }
            printf("%d",count);

            return 0;
         }

