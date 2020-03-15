
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<cmath>
#include<string>
#include<string.h>
#define   o   long long int
//#define x int i,n;cin >>n;int a[n];for(i=0;i<n;i++){cin>>a[i];}

//
using namespace std;

int main()

{




    int n;

    cin  >>n;


    int i,x,j;

    for(i=9;i>=1;i--)
    {



        j=i-1;
      x=(pow(2,i)-1)*(pow(2,j));

          if(n%x==0)
          {

              cout<<x;
              return 0;
          }

    }



       return 0;

     }


