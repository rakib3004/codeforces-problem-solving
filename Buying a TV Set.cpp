
#include<stdio.h>
  #include<iostream>
  #include<string>
   #include<cstdio>
   #include<cmath>
   #include<algorithm>

#include<string.h>

 #define o  long long int
using namespace std;

int main()

{



       o   a,b,x,y;


       cin>>a>>b>>x>>y;

       o i=__gcd(x,y);

       x=x/i;
       y=y/i;

       o m=a/x,n=b/y;


       cout<<min(m,n);












    return 0;

}
