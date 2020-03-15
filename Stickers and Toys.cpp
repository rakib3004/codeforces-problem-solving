
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o   long long int
//#define x int i,n,sum=0;cin >>n;int a[n];for(i=0;i<n;i++){cin>>a[i];sum+=a[i];}


using namespace std;

int main()

{


       o p;

   cin  >>p;


   o  n[p],s[p],t[p],x[p];

   int i;

   for(i=0;i<p;i++)
   {

       cin>>n[i]>>s[i]>>t[i];

     x[i]=min(s[i],t[i]);
     x[i]=n[i]-x[i];
     x[i]++;
   }

   for(i=0;i<p;i++)
   {
       cout<<x[i]<<endl;

   }




         return 0;
     }


