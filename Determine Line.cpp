
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o  long long int
using namespace std;

int main()

{
       int a[101]={0};

 int q;

 cin>>q;
    int n;

 int i,j,p;


 for(i=0;i<q;i++)
 {


     cin>>n;

     for(j=0;j<n;j++)
     {

     cin>>p;

     a[p]++;
     }
 }


  for(i=1;i<101;i++)
  {

      if(a[i]==q)
      {

          cout<<i<<" ";
      }
  }

    return 0;
}



