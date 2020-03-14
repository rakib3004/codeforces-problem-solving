
#include<stdio.h>

int main()

{

int n;

scanf("%d",&n);
int a[n];
int i,j;
for(i=0;i<n;i++)

{

    scanf("%d",&a[i]);

}

int k=a[0],own=0,opp=0;
    if(n==1)
    {

      k=a[0];
      printf("%d",2*k+1);

      return 0;

    }

    else

    {

        for(i=1;i<n;i++)
{

    if(a[i]>k)
    {

        k=a[i];
    }
}


    }




for(i=0; ;i++)
{
   for(j=0;j<n;j++)

   {


       opp+=a[j];
       own+=(k-a[j]);
   }
  if(own>opp)
  {

      printf("%d",k);

      return 0;
  }
    else
    {
own=0,opp=0;
        k++;


    }


}

  return 0;

}

