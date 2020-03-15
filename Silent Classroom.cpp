

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


           cin>>n;

               int   p[256]={0};



           string s[n];

              int x,y;

           int i;


           for(i=0;i<n;i++)
           {



               cin>>s[i];


               p[s[i][0]]++;

           }

             int sum=0;
           for(i=97;i<=122;i++)
           {
              x=p[i]/2;

            y=p[i]-x;


            x=(x*(x-1))/2;
            y=(y*(y-1))/2;

            sum+=x+y;

           }


          cout<<sum;

        return 0;

 }
