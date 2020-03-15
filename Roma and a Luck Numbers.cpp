
#include<stdio.h>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;
int LuckyNumber(int);

int main()
{


      int n,i,k;



    cin>>n>>k;

          int p,d,Perfection=0;



    for(i=0;i<n;i++)
    {

       cin>>p;

       d=LuckyNumber(p);

       if(d<=k)
       {

           Perfection++;
       }

    }
     cout<<Perfection;

    return 0;
    }

    int LuckyNumber(int p)
    {


        int Stream=0;
           int s;


        while(p!=0)
        {
          s=p%10;
          if(s==4||s==7)
          {

              Stream++;
          }
          p/=10;

        }

        return Stream;
    }
