
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>


 int main()
{
   int i,j;
    int n,a,b;

    scanf("%d%d%d",&n,&a,&b);
    int count=0;


    if(n-a>b)
    {
        count=b+1;

    }
    else if(n-a==b)
    {

        count=b;
    }
    else
    {

   count=n-a;
    }
     printf("%d",count);
  return 0;

}

