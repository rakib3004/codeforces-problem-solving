#include<stdio.h>

int main()

{
  int n,k,t;

  scanf("%d%d%d",&n,&k,&t);
   LOOP :
   if(t>n+k)
   {

       t-=n+k;
       goto LOOP;
   }

   if(t<k)
   {

       printf("%d",t);
   }
   else if (t<n)

    {
           printf("%d",k);

    }

    else
    {

                   printf("%d",(n+k)-t);


    }





   return 0;
}

