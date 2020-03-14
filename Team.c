
#include<stdio.h>

int main()

{

int i,n;
scanf("%d",&n);

int a[n][3];
  int b[n];

  int count=0;
for(i=0;i<n;i++)
{


    scanf("%d%d%d",&a[i][0],&a[i][1],&a[i][2]);
}

for(i=0;i<n;i++)
{
  b[i]=a[i][0]+a[i][1]+a[i][2];

  if(b[i]>1)
  {

         count++;
  }

}

printf("%d",count);

return 0;
}

