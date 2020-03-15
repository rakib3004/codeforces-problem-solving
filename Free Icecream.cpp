

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

  o  n,x,p;

  cin>>n>>p;


    o  i,count1=0;
    char a[n];
    o  b[n];

    for(i=0;i<n;i++)
    {

        cin>>a[i]>>b[i];

    }


    x=p;

    for(i=0;i<n;i++)
    {

        if(a[i]=='+')
        {

            x=x+b[i];
        }
        else if(a[i]=='-')

        {
          if(b[i]>x)

            {
                count1++;
            }
            else
                {

                 x=x-b[i];

                }

        }


    }



 cout<<x<<" "<<count1;
    return 0;

 }
