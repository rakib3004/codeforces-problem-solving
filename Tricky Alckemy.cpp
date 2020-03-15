
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

   o A,B;

    cin>>A>>B;

         o x,y,z;

         cin>>x>>y>>z;


         o a,b;


         a=2*x+y;

         b=3*z+y;


      o m,n;


         m=(a-A);
         n=(b-B);

         if(m<0)

         {
             m=0;
         }

         if(n<0)
         {

             n=0;
         }


       cout<<m+n;

 }
