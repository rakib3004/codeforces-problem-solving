
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;

int main()
{
          int i;

     int n,h,m;

     cin>>n>>h>>m;

          int a[n+1]={0};
          int l[m],r[m],x[m];



          for(i=1;i<=n;i++)
          {
            a[i]=h;

          }

               int j;
          for(i=0;i<m;i++)
          {

            cin>>l[i]>>r[i]>>x[i];

                for(j=l[i];j<=r[i];j++)
                {

                    if(x[i]<a[j])
                    {
                       a[j]=x[i];

                    }
                }

          }
       int sum=0;

    for(i=1;i<=n;i++)

    {

       sum+=(a[i]*a[i]);

    }



   cout<<sum;
   return 0;
}
