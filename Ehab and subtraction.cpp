
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{
       int n,k,m=1;

       cin  >>n>>k;

       int i,j;

        int a[n];

        for(i=0;i<n;i++)
        {

        cin>>a[i];
        }

        sort(a,a+n);
             cout <<a[0]<<endl;

            for(i=0;i<n-1;i++)
        {

            if(m==k)
            {

                return 0;
            }

          if(a[i]!=a[i+1])
          {

              cout <<a[i+1]-a[i]<<endl;
              m++;
          }


        }

        for(i=m;i<k;i++)
        {

            cout << 0<<endl;
        }







           return 0;
}

