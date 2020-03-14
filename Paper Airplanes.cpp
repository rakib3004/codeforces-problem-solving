
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{


int k,n,s,p;

scanf("%d%d%d%d",&k,&n,&s,&p);


if(n%s)
{

    n/=s;
    n++;
}

else
{

    n/=s;
}

k=k*n;


if(k%p)
{

    k=k/p;
    k++;
}

else
{

    k=k/p;
}


  printf("%d",k);
   return 0;
}
