
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cstdio>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o unsigned long long int
using namespace std;

int main()

{

   int n;

   cin>>n;


   string a;

   cin>>a;


    int i;
     int j,k=0,x=0,y=0;


    for(i=0;i<n;i++)
    {

        x=0;
        y=0;

        for(j=i;j<n;j++)
        {


            if(a[j]=='U')
            {

                x++;
            }

            else if(a[j]=='D')
                    {
                  x--  ;

                    }

            else if(a[j]=='L')
            {

                y--;
            }

            else if(a[j]=='R')
            {

                y++;
            }

k+=!(x|y);
        }



    }



 cout<<k;



 return 0;



}



