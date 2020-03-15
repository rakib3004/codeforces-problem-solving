
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{


         int x1,y1,x2,y2;


                 cin>>x1>>y1>>x2>>y2;


              int d,d1,d2;

              d1=abs(x1-x2);
              d2=abs(y1-y2);

               d=std::min(d1,d2);

               d=d+abs(d1-d2);

               cout  << d;
           return 0;
}

