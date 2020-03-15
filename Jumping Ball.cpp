
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o  unsigned  long long int

using namespace std;


int main()
            {



       int n;

       string s;

       cin>>n>>s;


       int i=0;

        int m=0;
       for(i=0;i<n;i++)
       {

           if(s[i]=='>')
           {

               break;
           }
           else
           {

               m++;
           }
       }
        for(i=n-1;i>=0;i--)
       {

           if(s[i]=='<')
           {

               break;
           }
           else
           {

               m++;
           }
       }



          cout<<m;


    return 0;

}


