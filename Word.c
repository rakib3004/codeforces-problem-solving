
#include<stdio.h>

#include<string.h>


int main()
{

    int i,c,m=0,n=0;


    char p[129];
    scanf("%s",&p);
    c=strlen(p);

    for(i=0;i<c;i++)
    {

        if(p[i]>96)
        {

            m++;
        }
    }
     n=c-m;

     if(m>=n)
     {

         for(i=0;i<c;i++)

         {
             if(p[i]<96)
             {
                 p[i]=p[i]+32;
             }

         }
     }

     else

     {
         for(i=0;i<c;i++)
         {

             if(p[i]>96)

             {
                 p[i]=p[i]-32;
             }
         }
     }

     printf("%s",p);

     return 0;

}

