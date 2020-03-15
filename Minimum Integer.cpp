
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

   int n,p;

   cin  >>n;



   int i;


   int  l[n],r[n],d[n];

   for(i=0;i<n;i++)
   {


      cin>>l[i]>>r[i]>>d[i];
   }

   for(i=0;i<n;i++)
   {

    if(d[i]<l[i])
    {


        cout  << d[i]<<endl;
    }


    else

    {

      p=r[i]%d[i];


      r[i]=r[i]-p;

      cout<<r[i]+d[i]<<endl;


    }


   }



    return 0;

}

