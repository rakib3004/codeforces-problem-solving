#include<string.h>
#include<stdio.h>
int main()

{





double count=0,y=0;

int n,i;
scanf("%d",&n);

double a[n];

for(i=0;i<n;i++)
{


scanf("%lf",&a[i]);


}

for(i=0;i<n;i++)
{
count=count+a[i];
}

y=count/n;

 printf("%lf",y);




return 0;
}


