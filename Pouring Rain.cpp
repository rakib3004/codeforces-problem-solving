
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o   long long int
#define z 3.14159265358979323846264338327950
using namespace std;


int main()
            {


      long double d1,h,v,e;


       cin>>d1>>h>>v>>e;
       long   double d=(d1/2);

     long   double k=z*d*d;
             k=v/k;
       if(e>=k)
       {

           cout<<"NO";

           return 0;
       }

       else
       {
             cout<<"YES"<<endl;
           cout<<(h/(k-e));
       }



    return 0;

}


