
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
  int i,m,n,k;

  scanf("%d",&n);

  m=1;

  G:
      k=m*n+1;

      for(i=2;i<=(k/2);i++)
      {

          if(k%i==0)

          {
              printf("%d",m);

        return 0;

          }
      }

     m++;
     goto G;
        return 0;


        }
