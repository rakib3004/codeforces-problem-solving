
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main()

{

int n;
scanf("%d",&n);

int i,j,c,d,f,s,r;

int a[n];
for(i=0;i<n;i++)
{
   scanf("%d",&a[i]);

}

for(i=0;i<n;i++)
{

for(j=i+1;j<n;j++)
{

    if(a[j]<a[i])
    {

        c=a[i];
        a[i]=a[j];
        a[j]=c;
    }
}
}
d=1;
for(i=1;i<n;i++)
{
  if(a[i]!=a[i-1])
  {

      d++;
      if(d==2)
      {

        s=a[i];
      }
  }
}


int max=a[n-1],min=a[0];
f=max+min;

if(d>3)
{
printf("-1");
    return 0;


}
else if(d==1)
{

    printf("0");
    return 0;


}


else if(d==2)
{

  if(f%2==0)
  {

      printf("%d",(f/2)-min);
      return 0;
  }


printf("%d",max-min);

}
else

{    r=f;
    f/=2;
   if(f!=s||(r%2!=0))

   {
    printf("-1");
    return 0;

   }

   printf("%d",f-min);
}



    return 0;
}


