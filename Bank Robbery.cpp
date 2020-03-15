
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{


int a,b,c,n,count=0;

scanf("%d%d%d%d",&a,&b,&c,&n);

int p[n];

int i;
for(i=0;i<n;i++)
{

    scanf("%d",&p[i]);

}

for(i=0;i<n;i++)
{


    if(p[i]>b&&p[i]<c)
    {

        count++;
    }
}
  printf("%d",count);
   return 0;
}
