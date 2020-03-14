
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()

{
  int i,m,n,t,p;
  scanf("%d%d",&n,&m);

    t=m/n;
    if(m%n)
    {

        printf("-1");
        return 0;
    }


        int count=0;
             p=t;
       for(i=0;i<p;i++)
       {

           if(!(t%2))


           {
             t/=2;
             count++;

           }
           else if(!(t%3))
           {

               t/=3;
               count++;
           }

           else
           {

               break;
           }

       }
             if(t==1)
                   {
       printf("%d",count);
                   }
                 else
                 {

                     printf("-1");
                 }

            return 0;

        }
