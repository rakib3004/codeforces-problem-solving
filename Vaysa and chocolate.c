#include<stdio.h>
int main( )


             {


               int n;

               scanf("%d",&n);




//2
//10 3 1 1
//1000000000 1 1000000000 1
long long a[n],c[n],s[n],b[n];
                 int i;
               for(i=0;i<n;i++)

               {


                   scanf("%lld%lld%lld%lld",&s[i],&a[i],&b[i],&c[i]);
               }

               for(i=0;i<n;i++)
               {


                   s[i]=s[i]/c[i];

                   s[i]=s[i]+(s[i]/a[i])*b[i];
                   printf("%lld\n",s[i]);
               }

                 return 0;

             }


