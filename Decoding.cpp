
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;

int main()
{


   int n;

  string a;



  cin>>n>>a;

  int i;
        int m=n/2;



int  c=m+1;
  int  d=m-1;

   char s[2000];

    s[m]=a[0];


  for(i=1;i<n;i++)
  {

   if(i%2)
   {

       s[d]=a[i];
       d--;
   }

   else
   {
        s[c]=a[i];
       c++;

   }


  }

  if(n%2==0)
  {
    for(i=n-1;i>=0;i--)
{
    cout<<s[i];

}


  }


 else
for(i=0;i<n;i++)
{
    cout<<s[i];

}




   return 0;
}
