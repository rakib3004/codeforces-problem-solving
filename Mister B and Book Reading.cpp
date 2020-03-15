
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{



     int c,v0,v1,a,l;
          cin >>c>>v0>>v1>>a>>l;
     int x;

     x=v0;

     int i;

     for(i=1;i<=1000;i++)
     {

      if(c<=x)
      {

          cout<<i;
          return 0;
      }

      x=x-l;

      v0=v0+a;

      if(v0<=v1)
      {

          x=x+v0;
      }

      else
      {

          x=x+v1;
      }


     }

           return 0;
}

