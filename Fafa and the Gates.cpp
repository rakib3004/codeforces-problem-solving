#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{

      int i,n,x,y,coin=0;


      cin  >>n;


      string a;

      cin  >>a;


      x=0;

      y=0;

      for(i=0;i<n;i++)
      {


          if(a[i]=='R')
          {

              x++;
          }

          else

          {
              y++;
          }

          if(x==y&&a[i]==a[i+1])
          {

            coin++;

          }
      }


      cout  << coin ;


           return 0;
}


