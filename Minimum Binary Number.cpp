
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


     int n;

     cin>>n;


     string s;

     cin>>s;

     if(s[0]=='0')
     {

         cout<<0;
         return 0;
     }

     int a=0;
     int i;


     for(i=0;i<n;i++)
     {



         if(s[i]=='0')

         {

             a++;

         }
     }

        cout<<1;

        for(i=0;i<a;i++)
        {

            cout<<0;
        }


        return 0;

}
