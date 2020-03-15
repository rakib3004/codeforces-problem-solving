
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

   string a;

   cin  >>a;


   int n=a.size();


   int i,j;
   while(n)
   {

    for(i=0,j=n-1;i<j;i++,j--)
   {
        if(a[i]==a[j])
        {

            continue;
        }


       else{


        cout<<n;
        return 0;
       }

   }

     n--;


   }


     cout<<0;
       return 0;

     }


