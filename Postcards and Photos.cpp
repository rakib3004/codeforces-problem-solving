
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o  long long int
using namespace std;

int main()

{


     string a;

     cin>>a;
           a=a+'g';
     int i;

     int d=0,count=0;

     int p=a.size();

     for(i=0;i<p-1;i++)
     {
          if(a[i]!=a[i+1])
          {
                   d=0;
              count++;
          }

          else
          {

              d++;

              if(d==5)
              {

                  count++;
                  d=0;
              }

          }

     }

     cout<<count;



    return 0;
}



