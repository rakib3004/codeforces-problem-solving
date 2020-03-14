#include<stdio.h>

int main()

{

         int p,q,n;
    scanf("%d%d%d",&n,&p,&q);

    int i;

    int a[p];
    int b[q];
    int c[n];
    int d[n];

    for(i=0;i<n;i++)
    {

        d[i]=i+1;
    }
    for(i=0;i<p;i++)
    {

        scanf("%d",&a[i]);
    }
    for(i=0;i<q;i++)
    {

        scanf("%d",&b[i]) ;
    }


   int j;

   for(i=0;i<n;i++)
   {
    for(j=0;j<q;j++)

    {

      if(d[i]==b[j])
      {

        c[i]=2;
      }
    }

   }

   for(i=0;i<n;i++)
   {
    for(j=0;j<p;j++)

    {

      if(d[i]==a[j])
      {

        c[i]=1;
      }
    }

   }


    for(i=0;i<n;i++)
    {

        printf("%d ",c[i]);
    }

    return 0;
}

