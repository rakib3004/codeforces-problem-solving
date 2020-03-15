
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

    o  n;

    cin  >>n;

    n++;

    if(n==1)
    {

        cout<<0;
    }

   else if(n%2==0)
    {

        cout <<n/2;
    }

    else{cout <<n;}


           return 0;
}

