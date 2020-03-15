

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

               string  s,s1,s2;

           for(i=0;i<n;i++)
           {

               cin>>s;

               sort(s.begin(),s.end());
               s1=s;


               reverse(s.begin(),s.end()) ;
               s2=s;
               if(s1==s2)
               {

                   cout<<-1<<endl;

               }
              else{cout<<s1<<endl;}



           }


        return 0;

 }
