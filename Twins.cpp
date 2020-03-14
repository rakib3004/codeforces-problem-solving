
 #include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
 int main()
{
int n,temp,c=0,h=0,b;
scanf("%d",&n);
    int sum=0;
int a[n];

int i,j;

for(i=0;i<n;i++)
{

    scanf("%d",&a[i]);
    sum+=a[i];

}

for(i=0;i<n;i++)
{


    for(j=i+1;j<n;j++)
    {


        if(a[j]>a[i])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
}
      b=sum;
for(i=0;i<n;i++)
{

     if(h>b)
     {

         break;
     }

     h+=a[i];
     b-=a[i];
     c++;
}

printf("%d",c);


  return 0;
}
