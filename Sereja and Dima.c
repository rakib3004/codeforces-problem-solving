#include<stdio.h>

int main()

{

    int i,j,k;

    int n;

    scanf("%d",&n);

    int a[n];

    for(i=0;i<n;i++)
    {

       scanf("%d",&a[i]);
    }

    j=0;
    k=n-1;

    int sereja=0;
    int dima=0;

    for(i=1;i<=n;i++)
    {

        if(i%2!=0)
        {

           if(a[k]>a[j])
           {
  sereja=sereja+a[k];
               k--;

           }

           else
           {
    sereja=sereja+a[j];

               j++;


           }


        }

        else



        {



           if(a[k]>a[j])
           {
dima=dima+a[k];
               k--;

           }

           else
           {

 dima=dima+a[j];
               j++;


           }





        }


    }


    printf("%d %d",sereja,dima) ;

    return 0;
}

