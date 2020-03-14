#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {

 int i,n,k;

 char a[207];
        scanf("%s",a);

            n= strlen(a);

        for(i=0;i<n;i++)
        {
              if(a[i]=='W'&&a[i+1]=='U'&&a[i+2]=='B')

              {


                  continue;

              }

              else if(a[i]=='U'&&a[i+1]=='B'&&a[i-1]=='W')
              {
                continue;

              }

              else if(a[i]=='B'&&a[i-1]=='U'&&a[i-2]=='W')
              {

                  continue;
              }

              else
              {

                  printf("%c",a[i]) ;
                  if(a[i+1]=='W'&&a[i+2]=='U'&&a[i+3]=='B')
                  {
                         printf(" ");
                       }
              }
        }

               return 0;
         }

