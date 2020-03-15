
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#define   o long long int

using namespace std;

int main()
{


      int a[5]={0};


       int n=5;


      int i;

         int sum=0;
      for(i=0;i<n;i++)
      {

          cin>>a[i];
         sum+=a[i];
      }


     int sum1=sum,sum2=sum;
      sort(a,a+5);


     for(i=4;i>=1;i--)
     {
         if(a[i]==a[i-1])
      {
        sum2=sum-a[i]-a[i-1];

       if(i>1&&a[i-1]==a[i-2])
       {

         sum2=sum2-a[i-2];

       }

      }

      sum1=min(sum2,sum1);
     }

     cout<<sum1;

        return 0;

 }
