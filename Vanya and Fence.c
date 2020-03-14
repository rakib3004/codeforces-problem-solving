
#include<stdio.h>


int main()

{
    int i,n,h,count=0;

    int wide=0;

    scanf("%d",&n);

    scanf("%d",&h);

    int a[n];


    for(i=0; i<n; i++)
    {

        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)

    {

        if (a[i]>h)
        {


            count++;
        }
    }

    wide=n+count;


    printf("%d",wide);


    return 0;

}



