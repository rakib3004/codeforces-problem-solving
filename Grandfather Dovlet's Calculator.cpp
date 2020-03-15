
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


  int a,b,i,p,sum=0;

  cin>>a>>b;


  int t[10]={6,2,5,5,4,5,6,3,7,6};

    for(i=a;i<=b;i++)
    {

        p=i;
      while(p)  {

         sum+=t[p%10];
         p=p/10;
        }


    }


      cout <<sum;



       return 0;

     }


