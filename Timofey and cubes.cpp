
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<cmath>
#include<string>
#define   o   long long int
using namespace std;

int main()

{

    o  n;

    cin  >>n;

    o  a[n];

    o  i,j;

    for(i=0;i<n;i++)
    {

       cin  >>a[i];

    }

    for(i=0,j=n-1;i<j;i=i+2,j=j-2)
    {


        swap(a[i],a[j]);
    }

for(i=0;i<n;i++)
    {

       cout  <<a[i]<<" ";

    }


           return 0;
}

