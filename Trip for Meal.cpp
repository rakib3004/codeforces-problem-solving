
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long longint
using namespace std;

int main()

{

   int  n,a,b,c;


   cin  >>n>>a>>b>>c;



   if(n==1)
   {

       cout  <<0;

       return 0;
   }
       int p,q,r;

       p=min(a,b);

       q=min(a,b);
       q=min(q,c);




          r=p+q*(n-2);


          cout  <<r;
           return 0;
}

