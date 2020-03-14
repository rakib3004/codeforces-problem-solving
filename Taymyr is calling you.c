#include<stdio.h>

int main()

{

    int n,m,z;
    int i,count=0;

    scanf("%d%d%d",&n,&m,&z);
    for(i=1;i<=z;i++)
    {
         if(i%m==0&&i%n==0)
         {

             count++ ;

         }

    }

    printf("%d",count);


    return 0;
}
