#include<stdio.h>
int main()

{

   int i,n,fs=0,sf=0;
       scanf("%d",&n);
   char a[n];

   scanf("%s",&a);

   for(i=1;i<n;i++)
   {

       if(a[i-1]!=a[i]&&a[i-1]=='F')
       {
          fs++;

       }

       if(a[i-1]!=a[i]&&a[i-1]=='S')
       {
          sf++;

       }

   }
       if(sf>fs)
       {

         printf("YES");

       }

   if(sf<=fs)
       {

         printf("NO");

       }






    return 0;

}

