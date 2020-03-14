
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {

      int n,k;
      scanf("%d%d",&n,&k);

      char  a[n];

      scanf("%s",a);

        int   i;
    char s;

    int count=0;


     for(s='a';s<='z';s++)
     {
              count=0;
         for(i=0;i<n;i++)
         {
                if(a[i]==s)
                {

                    count++;
                }

         }

         if(count>k)
         {

             printf("NO");
             return 0;
         }
     }

     printf("YES");
return 0;
         }
