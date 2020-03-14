
#include<stdio.h>

int main()

{



    int i,j,temp;

    int n;

    scanf("%d",&n);
    int  a[n];

    int m;

    scanf("%d",&m);


    for(i=0;i<n;i++)
    {


        scanf("%d",&a[i]);


    }

    for(i=0;i<n;i++)
    {

        for(j=i+1;j<n;j++)

        {
          if(a[i]<a[j])
          {



              temp=a[i];
              a[i]=a[j];
              a[j]=temp;

          }
        }
    }

    for(i=0;i<n;i++)
    {

        m-=a[i];

        if(m<=0)

        {
         printf("%d",i+1);

         return 0;
        }

    }

    printf("%d",n);

            return 0;

}
