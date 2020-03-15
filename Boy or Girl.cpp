

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



           string s;



           cin>>s;



           int a[256]={0};

           int i;


           for(i=0;i<s.size();i++)
           {
              a[s[i]]++;

           }

           int y=0;

           for(i=97;i<=122;i++)
           {

               if(a[i]!=0)
               {

                   y++;
               }
           }

           if(y%2)
           {

               cout<<"IGNORE HIM!";

           }

           else
           {

               cout<<"CHAT WITH HER!";
           }


        return 0;

 }
