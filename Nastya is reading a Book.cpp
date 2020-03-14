
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {


  int i,n,k;

  scanf("%d",&n);

  int l[n],r[n];

  for(i=0;i<n;i++)
  {

      scanf("%d%d",&l[i],&r[i]);
  }

  scanf("%d",&k);

  for(i=0;i<n;i++)
  {

     if(k<=r[i]&&k>=l[i])
     {

         printf("%d",n-i);
         return 0;
     }
  }
return 0;
         }
