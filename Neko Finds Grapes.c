
#include<stdio.h>

int main()

{


    int m,n,count=0;
    int i;
      int j;
    scanf("%d%d",&n,&m);

    int a[n],b[m];

int  ar1=0,ar2=0,br1=0,br2=0;

    for(i=0;i<n;i++)
    {

        scanf("%d",&a[i]);
        if(a[i]%2==1)
        {

            ar1++;
        }
        else
        {

            ar2++;
        }


    }

    for(j=0;j<m;j++)

    {
        scanf("%d",&b[j]);


            if(b[j]%2==1)
        {

            br1++;
        }
        else
        {

            br2++;
        }

    }


    if(ar2<br1)

    {

   count+=ar2;

    }

    else
    {

     count+=br1;
    }


   if(br2<ar1)

    {

   count+=br2;

    }

    else
    {

     count+=ar1;
    }




   printf("%d",count);

   return 0;
}
