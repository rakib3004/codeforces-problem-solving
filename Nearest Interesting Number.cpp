
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<string>

using namespace std;

int main()

{




int i,n,a,b,c,d;


cin  >>n;

      for(i=0;  ;i++)
      {

        a=n/100;
        b=(n%100)/10;
        c=(n%100)%10;

       d=a+b+c;

       if(d%4==0)
       {
      cout  << n;

      return 0;


       }

       else
       {

           n++;
       }

       if(n>996)
       {

           cout  << 1003;
           return 0;
       }

      }



           return 0;
}

