
#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
int main()

{

     string  a[12]={"January","February","March","April","May","June","July","August","September","October","November","December"};

     string s;

     cin  >>s;

     int i,n,p=0;

     cin  >>n;

     if(n>=12)
     {

         n=n%12;
     }
     for(i=0;i<12;i++)
     {

        if(s==a[i])
        {

        p= i;
         break;
        }


     }

    p=i+n;
    i=p;

     if(i>=12)
     {
        i=i-12;

     }

     cout  << a[i];


          return 0;
}
