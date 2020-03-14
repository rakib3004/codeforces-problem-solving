#include<stdio.h>

#include<stdlib.h>

#include<string.h>

int main()

{

    int a,n,y,f;
    int t1,c1,o1,d1,i1;

    int t2=4,c2=6,o2=8,d2=12,i2=20,sum=0;

    char t[20] = "Tetrahedron";

    char c[20] = "Cube";

    char o[20] = "Octahedron";

    char d[20] = "Dodecahedron";

    char i[20] = "Icosahedron";

    char cmp[20];


    scanf("%d\n",&n);


    for(y=1; y<=n; y++)
    {

        gets(cmp) ;

        t1=strcmp(cmp,t);
        if (t1==0)
        {
            a=t2;

        }




        c1=strcmp(cmp,c);
        if (c1==0)
        {
            a=c2;

        }



        o1=strcmp(cmp,o);
        if (o1==0)
        {
            a=o2;

        }




        d1=strcmp(cmp,d);
        if (d1==0)
        {
            a=d2;

        }


        i1=strcmp(cmp,i);
        if (i1==0)
        {
            a=i2;

        }
        sum=sum+a;
    }


    printf("%d",sum);
    return 0;

}
