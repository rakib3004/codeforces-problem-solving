
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int prime(long long);
 int main()
{


   int n;
   long long x,rt;

   scanf("%d",&n);

   int i;

   for(i=0;i<n;i++)

   {

       scanf("%I64d",&x) ;

       rt=sqrt(x);


       if(x==1)
       {

           printf("NO\n") ;
       }
       else if(prime(rt)==1&&(rt*rt==x))
       {

           printf("YES\n");
       }
       else
        {

                   printf("NO\n");

        }



   }

   return 0;
}

int prime(long long x)

{
          int i;

     for(i=2;i<=sqrt(x);i++)

     {

      if(x%i==0)
      {


          return 0;
      }


     }

     return 1;

}
