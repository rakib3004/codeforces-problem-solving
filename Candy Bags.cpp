
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include <numeric>

using namespace std;

int main()

{



  int n,m,p,q;
       cin >>n;

   m=n*n;
      p=m;
      q=m/2;

   int i,j,k,r;
         r=n/2;
   for(i=1,j=m;i<=q,j>q;i=i+r,j=j-r)
              {

                  for(k=0;k<r;k++)
                  {

                      printf("%d %d ",i+k,j-k);
                  }

                  printf("\n") ;
              }

          return 0;
}

