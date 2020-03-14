#include<stdio.h>


int main()
{
  int i,r=0,n,count=0,b=0;
  scanf("%d",&n);
  char a[5]={5,4,3,2,1} ;

     for(i=0;i<5;i++)
     {
        r=n/a[i] ;


         n=n%a[i];
       count=count+r;


     }
  printf("%d",count);
}
