

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
         int i;



  string a;


  cin>>a;




  int x=0;

int  y=0;

  int l;

   int f=a.size();

  for(i=0;i<f;i++)
  {

      if(a[i]=='1')
      {

          x++;
      }

      else{

        y++;
      }

  }

  l=min(x,y) ;
        l=l*2;


  cout<<f-l;
    return 0;


}
