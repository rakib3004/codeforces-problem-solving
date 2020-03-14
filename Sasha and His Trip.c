
#include<stdio.h>
#include<stdlib.h>
     #include<string.h>

#include<math.h>

int main()

{
  int i,v,n,k,sum;
  scanf("%d%d",&n,&v);
          k=n-v;
          if(n<=v)

          {
              sum=n;
          }

          else
          {
            sum=((k*(k+1))/2)+v;

          }


            sum=sum-1;
 printf("%d",sum);
        return 0;

          }
