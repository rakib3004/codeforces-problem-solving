
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()
   {


  int i,j,n,a,x,b,y,p;


  scanf("%d%d%d%d%d",&n,&a,&x,&b,&y);

  for(i=a,j=b,p=0;p<=n;i++,j--,p++)
  {


//   printf("%d___%d\n",i,j);


      if(i==j)
      {

          printf("YES");
          return 0;
      }

      if(i==x||j==y)
   {
      printf("NO");
       return 0;
   }

  if(i==n)
      {

          i=0;
      }

      if(j==1)
      {

          j=n+1;
      }



  }

    printf("NO");
return 0;
         }
