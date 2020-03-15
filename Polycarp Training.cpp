
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




      o  n;

      cin >>n;


      o a[n];


      o j,i;

      for(i=0;i<n;i++)
      {

          cin >>a[i];

      }

      sort(a,a+n);

          j=1;
      for(i=0;i<n;i++)
      {

         if(j<=a[i])
         {

             j++;
         }

      }

       cout  << j-1;
           return 0;
}

