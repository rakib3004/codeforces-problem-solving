
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

 int main()
{


int a,b,n,d,r,g,l;
scanf("%d%d",&a,&b);
if(a>b)
{

    n=a;
    d=b;
}
else{

    n=b;
    d=a;

}
r=n%d;
while(r!=0)
{

    n=d;
    d=r;
    r=n%d;
}

g=d;

l=(a*b)/g;

printf("%d",l);

    return 0;

}
