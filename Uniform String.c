
#include<stdio.h>

int main()

{
 int n;
 int p=0;

 scanf("%d",&n);

 int a[n],b[n];

 int i,j;

 for(i=0;i<n;i++)
 {

     scanf("%d%d",&a[i],&b[i]);
 }

 for(i=0;i<n;i++)
 {
   p=0;
   for(j=0;j<a[i];j++)
   {

       printf("%c",97+p);
              p++;
       if(p==b[i])

       {
           p=0;
       }



   }
     printf("\n");
 }
  return 0;

}
