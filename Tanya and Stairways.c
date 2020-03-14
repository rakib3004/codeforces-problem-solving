#include<stdio.h>
 #include<string.h>
 #include<stdlib.h>

int main ()
           {


         int i;

         int n;

         scanf("%d",&n);

         int a[n];
         int b[n];

         for(i=0;i<n;i++)
         {

             scanf("%d",&a[i]);
         }

         int count=1;
          int j=0;

                  b[j]=1;
           for(i=1;i<n;i++)

          {

              if(a[i]==1)


              {
                  b[j]=b[j];

                  j++;
                    b[j]=1;
                  count++;


              }

              else

              {

                  b[j]++;

              }
          }

          printf("%d\n",count);

          for(i=0;i<count;i++)

          {
              printf("%d ",b[i]);
          }
           }

