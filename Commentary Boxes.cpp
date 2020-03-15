
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{



   o n,m,a,b,ax,by,p;


   cin>>n>>m>>a>>b;

      p=n/m;

   if((n%m==0))
   {



 cout<<0;
 return 0;
   }


   ax=(p+1)*m;

   ax=(ax-n)*a;

   by=p*m;
   by=(n-by)*b;

   cout <<std::min(ax,by);
           return 0;
}

