
#include<stdio.h>

int a,b,c;
int main()
{
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;i++)
    {
        scanf("%d",&c);
        c=86400-c;
        b-=c;
        if(b<=0)
        {
            printf("%d",i);
            return 0;
        }
    }
    return 0;
}
