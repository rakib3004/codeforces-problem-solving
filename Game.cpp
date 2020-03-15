

#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#define   o long long int

using namespace std;

int main()
{


           int n;
              int i ;

           cin>>n;

           int a[n];


           for(i=0;i<n;i++)
           {

               cin>>a[i];

           }

           sort(a,a+n);

        int f = n/2;


        if(n%2==0)
        {

            cout<<a[f-1];

        }

        else

        {
            cout<<a[n-f-1];
        }

        return 0;

 }
