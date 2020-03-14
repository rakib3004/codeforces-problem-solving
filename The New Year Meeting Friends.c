

#include<stdio.h>

int main()

{
    int i,j,swap;
   int a[3];

  scanf("%d%d%d",&a[0],&a[1],&a[2]);

       for(i=0;i<3;i++)
       {

       for(j=i+1;j<3;j++)
       {
          if(a[i]>a[j])
          {

              swap=a[i];
              a[i]=a[j];
              a[j]=swap;
          }

       }

       }

       printf("%d",(a[1]-a[0])+(a[2]-a[1]));
       return 0;
}
