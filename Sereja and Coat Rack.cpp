
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o   long long int

using namespace std;


int main()
            {



           int n,d,m;

           cin>>n>>d;

           int a[n];

           int i;
           int sum=0;

           for(i=0;i<n;i++)
           {

               cin>>a[i];
                  sum+=a[i];


           }

           cin>>m;
           if(m<n)
           {
                 sum=0;
                 sort(a,a+n);
               for(i=0;i<m;i++)
               {

                   sum+=a[i];
               }

           }
            else if(m>n)
            {

                m=m-n;

                sum-=(m*d);
            }

            cout<<sum;




    return 0;

}


