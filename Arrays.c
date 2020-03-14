#include<stdio.h>
#include<math.h>

int main()

{


    int m,n;

    scanf("%d%d",&m,&n);


    int a[m],b[n];

    int i,j,k,l;
    scanf("%d%d",&k,&l);

    int temp;


    for(i=0;i<m;i++)
    {
        scanf("%d",&a[i]);

    }

    for(j=0;j<n;j++)
    {

        scanf("%d",&b[j]);
    }



 //   printf("%d\n",a[k-1]);
   // printf("%d\n",b[0]);
    if(a[k-1]<b[n-l])
       {

        printf("YES");
       }

        else
        {

            printf("NO");
        }

       return 0;
}

