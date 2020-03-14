#include<stdio.h>

int main()

{
    int m,n;
    int i,p,j,r;
    int k=0;
    scanf("%d %d",&n,&m);

    int a[m];
     for(i=0;i<m;i++)
     {
       a[i]=1;


     }




    for(i=0;i<n;i++)
    {

        scanf("%d",&p);

        for(j=0;j<p;j++)
        {

           scanf("%d",&r);

           if(a[r-1]!=0)
           {
               a[r-1]=0;
           }

        }


    }

    for(i=0;i<m;i++)
    {

        if(a[i]!=0)

        {
            printf("NO");
            return 0;
        }
    }



    printf("YES");



    return 0;
}


