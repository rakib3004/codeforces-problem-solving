
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {

       char a[107];

       scanf("%s",a);

       int i,d;
       d=strlen(a);
       for(i=0;i<d;i++)
       {

           if(a[i]>='A'&&a[i]<='Z')
           {

               a[i]=a[i]+32;
           }

       }


       for(i=0;i<d;i++)
       {
            if(a[i]=='a'||a[i]=='o'||a[i]=='y'||a[i]=='e'||a[i]=='u'||a[i]=='i')
            {

               continue;
            }

            else
            {

                printf(".%c",a[i]);
            }

       }



return 0;
         }
