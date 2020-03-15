
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




string s;

cin>>s;


int d1,d2,d,m1,m2,m,p,x;


            d1=(s[0]-'0')*10;
            d2=(s[1]-'0');


            d=d1+d2;


            d=d*60;

            m1=(s[3]-'0')*10;
            m2=(s[4]-'0');
            m=m1+m2;


            cin>>x;

            if(x>1440)
            {
               x=x%1440;

            }

            p=d+m+x;



            m=p%60;

            d=p/60;
            if(d>23)
            {

                d=d-24;

            }

            if(d<10)
            {

                cout<<"0"<<d;
            }
            else
            {

                cout<<d;
            }

             cout<<":";

             if(m<10)
             {

                 cout<<"0"<<m;

             }

             else
             {
                 cout<<m;
             }
    return 0;

}


