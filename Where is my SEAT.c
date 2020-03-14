#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

int main()
{
    int n,m,s,i,c,r;
    scanf("%d%d%d", &n, &m, &s);
    c=1;
    r=s;
    while(r>m)
    {
     r-=m;
     c++;
    }
    printf("%d %d", c,r);

    return 0;
}
