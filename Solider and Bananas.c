#include<stdio.h>

int main()

{


    int k,w,n,i,p,sum,o;
    sum=0;
    scanf("%d%d%d",&k,&n,&w);

    for(i=1;i<w+1;i++)
    {

        p=i*k;

        sum=sum+p;
    }
    o=sum-n;

    if(o>0)
    {
        printf("%d",o);
    }
    else

        {
         o=0;
         printf("%d",o);
        }




    return 0;
}
