
#include<stdio.h>

int main()

{

long long int n;

   scanf("%I64d",&n);

  long long   int i,j;

  long long  int a[n],c[n],w,p;
    long long int b[n];


   for(i=0;i<n;i++)

   {

       scanf("%I64d",&a[i]);



         b[i]=(a[i]*(a[i]+1))/2;

                  c[i]=0;
         for(j=1;j<=a[i]; j=2*j)
         {


                c[i]=c[i]+j;


             }

             c[i]=2*c[i];

             b[i]=b[i]-c[i];

         }





   for(i=0;i<n;i++)
   {


       printf("%I64d\n",b[i]);
   }


  return 0;
}





