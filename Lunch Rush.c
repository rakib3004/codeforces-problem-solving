
#include<stdio.h>
int main()
{



    int n,k;

      int  i;
    scanf("%d%d",&n,&k);



    int a[n],b[n];


  int  f[n];



    for(i=0;i<n;i++)
    {
        scanf("%d %d",&a[i],&b[i]);
        if(b[i]>k)f[i]=a[i]-(b[i]-k);
        else
        {
            f[i]=a[i];
        }

    }
    for(i=1;i<n;i++)
    {
        if(f[0]<f[i])f[0]=f[i];
    }
    printf("%d",f[0]);
    return 0;


}

