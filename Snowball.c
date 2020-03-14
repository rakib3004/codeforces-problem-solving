#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
       int i;
           int w[3],h[3];

           for(i=0;i<3;i++)
           {

             scanf("%d%d",&w[i],&h[i]);

           }

           for(i=h[0];i>=1;i--)
           {

               w[0]=w[0]+i;

               if(i==h[1])
               {

                   w[0]=w[0]-w[1];



                   if(w[0]<0)
                   {

                       w[0]=0;
                   }
               }
               if(i==h[2])
               {

                   w[0]=w[0]-w[2];



                   if(w[0]<0)
                   {

                       w[0]=0;
                   }
               }
           }

           printf("%d",w[0]);
        return 0;

        }

