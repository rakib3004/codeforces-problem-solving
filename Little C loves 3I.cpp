

#include<stdio.h>
#include<string>
#include<string.h>
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

      int n;


      cin>>n;



  int m=n-2;
  if(m%3==0)
  {

      cout<<1<<" "<<2<<" "<<m-1;
  }

  else
  {

   cout<<1<<" "<<1<<" "<<m;
  }



    return 0;


}
