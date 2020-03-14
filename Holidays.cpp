
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()

{

int n;
scanf("%d",&n);

int a,b,c,d;

a=n/7;


b=n/7;
 c=n%7;
 if(c>1&&c!=6)
 {
   c=2;
   d=0;
 }
 else if(c==6)
    {
    d=1;
     c=2;
 }

else

 {
 d=0;

 }
 a=(a*2)+d;
b=(b*2)+c;

printf("%d %d",a,b);

return 0;
}
