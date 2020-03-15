
#include<stdio.h>


int main()

{


 long long int  n,k;

scanf("%I64d%I64d",&n,&k);

int i,r;

r=n/k;

if(r%2!=0)
{

    printf("YES");
}

else
    {
     printf("NO");
    }







return 0;


}
