#include<stdio.h>

int main()


{
    int i,j,max=0,count=1129;
    int a[4];
     int b[4];
  for(i=0;i<4;i++)
  {

      scanf("%d",&a[i]);

  }

  for(i=0;i<4;i++)
  {
        b[i]=0;
      for(j=i+1;j<4;j++)
      {
        if(a[i]==a[j])
        {

            b[i]++;
            a[j]=count;
            count=count+11803004;
        }

      }
  }




  for(i=0;i<4;i++)
  {


        max+=b[i];
  }

  printf("%d",max);

  return 0;

}

