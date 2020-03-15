
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

    int n,m,k;

    cin>>n>>m>>k;



    int a[n+1]={0};


    int i;
            int b,c;



    for(i=1;i<=n;i++)
    {
        cin>>a[i];

    }



                  int b1=100000,c1=10000000,d;


              for(i=m+1;i<=n;i++)
              {

                  if(a[i]<=k&&a[i]!=0)

                    {
                     b1=10*(i-m);
                     break;
                    }


              }
               for(i=m-1;i>=0;i--)
              {

                  if(a[i]<=k&&a[i]!=0)

                    {
                     c1=10*(m-i);
                     break;
                    }


              }


           cout<<min(b1,c1);

        return 0;

 }
