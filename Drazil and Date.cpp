
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

int a,b,s,i,d;


cin>>a>>b>>s;

         d=abs(a)+abs(b);


         if(d>s)
         {

             cout<<"No";
         }

         else if(d==s)

         {
           cout<<"Yes";
         }

        else if(d<s)
        {

            i=s-d;

            if(i%2==0)
            {

                cout<<"Yes";
            }

            else
            {

                cout<<"No";
            }
        }

              return 0;

}
