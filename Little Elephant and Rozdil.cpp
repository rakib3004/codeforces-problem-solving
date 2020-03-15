
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

    int  n;


    cin  >>n;




    int  i;


    int a[n];

    for(i=0;i<n;i++)
    {

        cin  >>a[i];
    }

    int min=a[0],x=1;


    for(i=1;i<n;i++)

    {

        if(a[i]<min)
        {

        min =a[i];
         x=i+1;

        }
    }

  sort(a,a+n);


    for(i=1;i<n;i++)

    {

        if(a[i]==min)
        {

            cout  <<"Still Rozdil" ;

            return 0;
        }

    }


    cout  <<x;
           return 0;
}

