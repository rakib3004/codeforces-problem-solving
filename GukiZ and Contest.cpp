
#include<stdio.h>

int main()

{


    int n;

    scanf("%d",&n);

    int a[n],b[n];

    int i,j,k;

    for(i=0;i<n;i++)
    {



        scanf("%d",&a[i]) ;

    }


        int u;
    for(i=0;i<n;i++)
    {

  u=0;
        for(j=0;j<n;j++)
        {



        if(a[i]<a[j])
        {

            u++;
        }




           }

 printf("%d ",u+1);
        }




  return 0;
}





