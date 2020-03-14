#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main()

         {

 int i,n,k;

 scanf("%d%d",&n,&k);

 int sum=0;


           int a[n];
for(i=0;i<n;i++)
{

    scanf("%d",&a[i]);
}

  int pro= a[k-1];


for(i=0;i<n;i++)
{

    if(a[i]>=a[k-1]&&a[i]!=0)
    {

        sum++;

    }
    else{break;}

}

         printf("%d",sum);


               return 0;
         }

