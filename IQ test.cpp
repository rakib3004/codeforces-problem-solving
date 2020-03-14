
#include<stdio.h>

int main()

         {

          int  n,m,i,j,even=0,e,o,odd=0;



       scanf("%d",&n);

        int a[n];



               for(i=0;i<n;i++)
               {

                scanf("%d",&a[i]) ;
               }



               for(i=0;i<n;i++)
               {

                  if(a[i]%2==0)
                  {

                      even++;
                      e=i+1;
                  }
                  else


                  {
                      odd++;
                      o=i+1;
                  }

               }




               if(even==1)

               {
                   printf("%d",e);
               }

               else
               {

                   printf("%d",o);
               }

               return 0;
         }
