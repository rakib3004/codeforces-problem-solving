
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main(){


    int n,k;

    cin >>n>>k;

   int r=n*2;
   int g=n*5;
  int  b=n*8;
  int sum=0;
    if(r%k)
    {

        r=r/k;
        r++;
    }

    else
    {

       r=r/k;

    }

    if(g%k)
    {


        g=g/k;
        g++;
    }

    else
    {



        g=g/k;
    }

    if(b%k)
    {


        b=b/k;
        b++;
    }

    else
    {


        b=b/k;
    }


    sum=r+g+b;


    cout << sum;
return 0;

}
