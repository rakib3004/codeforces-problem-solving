#include<stdio.h>
int main()

{

    int n;
    scanf("%d",&n);

    int a[n];
    int flag;
    int temp;
    int diff;
    int count;
    int min;
    int max;
    int i;
    int j;

    for(i=0;i<n;i++)
    {


        scanf("%d",&a[i]);
    }


    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)
        {

            if(a[i]>a[j])
            {

                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }

    min= a[0];
    max=a[n-1];


    diff=max-min;
    diff++;


    count=diff-n;

    printf("%d",count);

    return 0;
}

