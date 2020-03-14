#include<stdio.h>

int main()


{
 int n;
 scanf("%d",&n);
 int i,a[n][4];
 int count=1;
 for(i=0;i<n;i++)
 {

     scanf("%d%d%d%d",&a[i][0],&a[i][1],&a[i][2],&a[i][3]);

 }


 int sum[n];

 for(i=0;i<n;i++)
 {

     sum[i]=a[i][0]+a[i][1]+a[i][2]+a[i][3];


 }

    for(i=1;i<n;i++)

    {


        if(sum[0]<sum[i])

        {
            count++;
        }
    }

   printf("%d",count);

   return 0;
}

