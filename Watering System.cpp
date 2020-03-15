
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

 int n,A,B;

      int x=0,s=0;
 cin>>n>>A>>B;
     int p;

 int i;
  int a[n];

 for(i=0;i<n;i++)
 {

     cin>>a[i];

     s+=a[i];
 }


   sort(a+1,a+n);


   for(i=n-1;i>=1;i--)
   {
    p=(a[0]*A)/s;

    if(p>=B)
    {

      cout<<x;

      return 0;

    }

    else
    {


        s-=a[i];
        x++;
    }


   }

   p=(a[0]*A)/s;

    if(p>=B)
    {

      cout<<x;

      return 0;

    }






 return 0;



}



