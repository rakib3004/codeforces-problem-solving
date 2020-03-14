
#include<stdio.h>
  #include<stdlib.h>
int main()


         {

          int count=0;
          int n;
          scanf("%d",&n);
          char  a[n+2];

          scanf("%s",a);

          int i;
          char b='a';
          char c='A';

          calc:

              for(i=0;i<n;i++)
              {

                  if(b==a[i]||c==a[i])
                  {

                      b++;
                      c++;
                      count++;
                      goto calc;
                  }
              }


              if(count==26)
              {
                printf("YES");

              }

              else

              {

                  printf("NO");
              }

         return 0;
         }
