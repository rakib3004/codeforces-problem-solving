#include<stdio.h>

int main()

{
    int i,n,k;


    scanf("%d ",&n);

    scanf("%d",&k);
for(i=0;i<k;i++)
{

    if(n%10==0)
    {
        n=n/10;
    }
    else
    {

        n--;
    }
}
printf("%d",n);

   return 0;
}

