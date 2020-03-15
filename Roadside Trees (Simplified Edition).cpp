
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
           int n;
         cin  >>n;
       int a[n];

       int i,count=0;
              count =(2*n)-1;

       for(i=0;i<n;i++)
       {
        cin  >>a[i];

       }

           count+=a[0];

      for(i=1;i<n;i++)
      {

          count+=abs(a[i]-a[i-1]);
      }

       cout <<count;
           return 0;
}

