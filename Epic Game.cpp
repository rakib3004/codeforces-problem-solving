
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

 int gcd(int,int) ;
 int main()
{
  int a,b,n;
  int f;
  int i,m;
  scanf("%d%d%d",&a,&b,&n);

  for(i=1;n>0;i++)
  {


   if(i%2)
   {

       m=gcd(a,n);
       n-=m;
       if(n<=0)
       {
         printf("0");
         return 0;
       }

   }

   else
   {


       m=gcd(b,n) ;

      n-=m;
       if(n<=0)
       {
         printf("1");
         return 0;
       }

   }

  }

   return 0;

}

int gcd(int k,int n)
{


    int i,t;

    for(i=1;i<=k&&i<=n;i++)
    {

        if(k%i==0&&n%i==0)
            t=i;
    }

    return t;
}
