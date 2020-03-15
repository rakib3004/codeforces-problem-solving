
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cstdio>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o unsigned long long int
using namespace std;

int main()

{

   int n;

       int p=0,q=0;
   cin>>n;



   int a[n];


   int i;

   cin>>a[0];


     int c[n]={0};





   for(i=1;i<n;i++)
   {

     cin>>a[i];
      c[i]=a[i]-a[i-1];

   }

   c[0]=a[1]-a[0];

   for(i=1;i<n;i++)
   {

       if(c[i]!=c[0])
       {

           cout<<a[n-1];
           return 0;
       }
   }



    cout<<a[n-1]+c[0];



 return 0;



}



