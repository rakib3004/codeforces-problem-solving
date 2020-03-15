
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#define o long long int

using namespace std;

int main()
{


       map<string,int> m;

       int n;


       cin>>n;
       string s;

       cin>>s;
       int i;


       for(i=0;i<n-1;i++)
       {
       m[s.substr(i,2)]++;

       }

       string r;

       int c=0;

        for(i=0;i<n-1;i++)
        {


            if(m[s.substr(i,2)]>c)
            {

                c=m[s.substr(i,2)];
                r=s.substr(i,2);
            }
        }

//😎😎


       cout<<r;
   return 0;
}
