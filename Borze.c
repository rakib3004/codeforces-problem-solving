
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
   char a[219];

   scanf("%s",a);
   int i;
   for(i=0;i<219;i++)
   {

       if(a[i]=='\0')
          {
            break;


          }

          if(a[i]=='-'&&a[i+1]=='.')

          {
              i++;
              printf("1");
          }

          else if(a[i]=='-'&&a[i+1]=='-')

          {
              i++;
               printf("2");
          }
              else if(a[i]=='.')
              {

                  printf("0");

              }

              else
              {

              }
          }


        return 0;

        }
