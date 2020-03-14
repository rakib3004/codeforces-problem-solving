
#include<stdio.h>

int main()


{



    int i,n,f;
    int r=0,l=0;
    scanf("%d%d",&n,&f);

    int a[n],b[n],c[n],d[n],e[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]) ;

    }


    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]) ;
        c[i]=b[i];
    }

    if(n==1)
    {

      printf("Tie");
      return 0;
    }

     for(i=1;i<n;i++)
    {
            b[i]=b[i]+b[i-1];
    }

     for(i=0;i<n;i++)
    {
        d[i]=a[i]-(f*b[i]);

    if(d[i]>0)
    {

        l=l+d[i];
    }
    }


    for(i=n-2;i>0;i--)
    {

        c[i]=c[i+1]+c[i];
    }

    for(i=n-1;i>0;i--)
    {

        e[i]=a[i]-(f*c[i]);

        if(e[i]>0)
        {

            r=r+e[i];
        }
    }

    if(r>l)

    {

        printf("Radewoosh");
    }

    else if(l>r)
    {

        printf("Limak");
    }

    else
    {

        printf("Tie");
    }

    return 0;

}



