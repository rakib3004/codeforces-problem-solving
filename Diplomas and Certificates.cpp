
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

   o n,k;

   cin>>n>>k;


   o q,p=n/2;

  q=k+1;


  o r;


  r=p/q;


 o a,b,c;


  a=r;

  b=r*k;

  c=n-(a+b);
  cout<<a<<" "<<b<<" "<<c;


    return 0;
}


