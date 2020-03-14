#include<stdio.h>
 #include<string.h>
  #include<stdlib.h>
int main()

         {
           int i,n;
           scanf("%d",&n);
            int count=0;
           char a[n];

            scanf("%s",&a);



           for(i=0;i<n-2;i++)
           {
              if(a[i]=='x'&&a[i+1]=='x'&&a[i+2]=='x')
              {
                  count++;
              }

           }

            printf("%d",count);

            return 0;
         }

