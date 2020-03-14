#include<stdio.h>
#include<stdlib.h>
#include<string.h>

  int main()
  {


int i,n,k,l,c,d,p,nl,np;


scanf("%d%d%d%d%d%d%d%d",&n,&k,&l,&c,&d,&p,&nl,&np);

          int a[3];

          a[0]=(k*l)/nl;

          a[1]=c*d;

          a[2]=p/np;

          int min =a[0];

          for(i=1;i<3;i++)

          {
              if(a[i]<min)
              {

                  min=a[i];

              }
          }


          printf("%d",min/n);
     return 0 ;

  }

