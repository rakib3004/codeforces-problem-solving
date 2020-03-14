#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {



      char  a[100];

      scanf("%s",a);

        int   i,d;
           d=strlen(a);

           if(d<7)
           {

               printf("NO");
               return 0;
           }

           for(i=0;i<d-6;i++)
           {
 if((a[i]==a[i+1])&&(a[i]==a[i+2])&&(a[i]==a[i+3])&&(a[i]==a[i+4])&&(a[i]==a[i+5])&&(a[i]==a[i+6]))
                              {
                              printf("YES");
                                  return 0;
                              }
           }
           printf("NO");

return 0;
         }

