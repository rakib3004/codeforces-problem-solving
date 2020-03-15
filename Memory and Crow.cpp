

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

               int   a[n];
              int b[n];









           for(i=0;i<n;i++)
           {


               cin>>a[i];

                 b[i]=a[i];

           }

             for(i=0;i<n-1;i++)

             {
                b[i]=a[i]+a[i+1];
             }

             for(i=0;i<n;i++)
           {

              cout<<b[i]<<" ";

           }


        return 0;

 }
