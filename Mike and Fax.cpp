
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()

{
     int i,d,j,n,k,p,c,q,r,h;
    char  lk[1003];


    scanf("%s",lk);
     scanf("%d",&n);

    d=strlen(lk);
              c=d/n;
              h=d%n;
        if(h)
        {
         printf("NO");
         return 0;

        }
     for(i=0;i<n;i++)
     {
             p=c*i;
               q=p+c;
         for(j=p,r=q-1;j<q;j++,r--)
         {
             if(lk[j]==lk[r])
                  {

                      continue;
                  }

                  else
                  {

                      printf("NO");
                      return 0;
                  }
         }
     }

            printf("YES");
            return 0;

        }
