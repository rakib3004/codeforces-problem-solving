
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{

int i,j,p;
int n,m;

scanf("%d%d",&n,&m)  ;

int a[m+1]={0};

int b[n+1]={0};

for(i=1;i<=m;i++)
{

    scanf("%d",&a[i]) ;

}
    p=n;
for(i=1;i<=m;i++)
{

    for(j=a[i];j<=p;j++)
    {
      if(b[j]==0)
      {
          b[j]=a[i];

      }
      else

      {

          continue;
      }



    }

    p=a[i]-1;
}

for(i=1;i<=n;i++)

{


    printf("%d ",b[i]) ;
}





   return 0;
}
