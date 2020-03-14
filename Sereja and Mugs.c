
#include<stdio.h>

int main()

{

    int n,s;
    int c=0;

    scanf("%d%d",&n,&s);

    int a[n];
    int sum=0;

    int i;

    for(i=0;i<n;i++)
    {


        scanf("%d",&a[i]);
        sum+=a[i];
        if(a[i]>c)
        {

            c=a[i];
        }
    }


        if(sum-c>s)
        {


        printf("NO");
        return 0;
    }

    printf("YES");

    return 0;
}
