

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

              o a[n],b[n],c[n],sum[n];


              for(i=0;i<n;i++)
              {

                  cin>>a[i]>>b[i]>>c[i];

                  sum[i]=(a[i]+b[i]+c[i])/2;
              }

              for(i=0;i<n;i++)
              {


                cout<<sum[i]<<endl;


              }

        return 0;

 }
