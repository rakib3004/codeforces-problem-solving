
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<string>

using namespace std;

int main()

{


  long long int n;

   cin  >>n;

   long long int i,j;
         int a[n];

   for(i=0;i<n;i++)
   {

       cin >>a[i];

   }

   long long int sum =0;

   sort(a,a+n);

   for(i=0,j=n-1;i<j;i++,j--)
   {

       sum+=(a[i]+a[j])*(a[i]+a[j]);

   }


   cout << sum;


           return 0;
}

