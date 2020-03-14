
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

  int main()
  {

     int n;
scanf("%d",&n);

   int i,j;


    int p[n]={0};
    int a, b ;
     int y=0;
    for(i=1;i<n;i++)

    {
        scanf("%d",&p[i]);

    }
    scanf("%d%d",&a,&b);




for(i=a;i<b;i++)
{

    y+=p[i];
}

printf("%d",y);

   return 0 ;

  }
