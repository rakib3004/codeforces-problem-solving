#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
#include<math.h>

int main()
{
    float d,s,p;
    int n,i;
    scanf("%f %d", &s,&n);
    //d=4;
    p=(3.0000)*(s);
    for(i=0;i<n;i++)
    {
        p*=4;
        p/=3;
    }
    printf("%f", p);




    return 0;
}
