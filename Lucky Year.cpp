
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
//#define x  long long int i,n;cin >>n; long long int a[n];for(i=0;i<n;i++){cin>>a[i];}

//
using namespace std;

int main()

{

 int a,p,q;


 cin>>a;


 if(a<10)
 {

     cout<<1;
 }
   else if(a<100)
 {


     p=a/10;
     p++;
     p*=10;
     cout<<p-a;
 }
   else if(a<1000)
 {


     p=a/100;
     p++;
     p*=100;
     cout<<p-a;
 }
   else if(a<10000)
 {


     p=a/1000;
     p++;
     p*=1000;
     cout<<p-a;
 }
   else if(a<100000)
 {


     p=a/10000;
     p++;
     p*=10000;
     cout<<p-a;
 }
   else if(a<1000000)
 {


     p=a/100000;
     p++;
     p*=100000;
     cout<<p-a;
 }
   else if(a<10000000)
 {


     p=a/1000000;
     p++;
     p*=1000000;
     cout<<p-a;
 }
   else if(a<100000000)
 {


     p=a/10000000;
     p++;
     p*=10000000;
     cout<<p-a;
 }
   else if(a<1000000000)
 {


     p=a/100000000;
     p++;
     p*=100000000;
     cout<<p-a;
 }
 else if(a<10000000000)
 {


     p=a/1000000000;
     p++;
     p*=1000000000;
     cout<<p-a;
 }


       return 0;

     }


