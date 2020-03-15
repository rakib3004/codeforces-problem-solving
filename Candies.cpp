
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<cmath>
#include<cstdio>
#include<map>
#include<string>
#include<string.h>
#define   o   long long int
#define x  int i,n,k;cin >>n>>k;  int a[n];for(i=0;i<n;i++){cin>>a[i];}


using namespace std;

int main()

{





            int n,m;

           cin>>n>>m;
              int i;

           int a[m];


            int y=n/m;

            for(i=0;i<m;i++)
            {

                a[i]=y;
            }

            int z=n%m;

            for(i=0;i<m;i++)
            {
               if(z==0)
               {

                   break;

               }

               a[i]++;
               z--;

            }


            for(i=m-1;i>=0;i--)
            {

                cout<<a[i]<<" ";
            }


              return 0;

}
