
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>


using namespace std;

int main()
{

       int n,m;

       cin>>n>>m;



      double a[n],b[n];

     double c[n]={} ;

       int i;


       cin>>a[0]>>b[0];



       c[0]=a[0]*pow(b[0],-1);





   double r=c[0];

       for(i=1;i<n;i++)
       {


       cin>>a[i]>>b[i];
       c[i]=a[i]*pow(b[i],-1);

       if(r>c[i])
       {

           r=c[i];

       }

   }


   double l=m*r;


   printf("%.8lf",l);




}
