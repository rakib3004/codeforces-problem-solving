
#include<stdio.h>
#include<iostream>
#include<string>
#include<cstdio>
#include<cmath>
#include<algorithm>
#include<string.h>
#define o   long long int

using namespace std;


int main()
            {


             int x,y,x3,y3;


             cin>>x>>y;


                 x3=abs(x);

                 y3=abs(y);

             int x1=0,y1=0,x2=0,y2=0;

             if(x>0&&y>0)
             {

                 y1=x3+y3;x2=x3+y3;
             }
             else if(x>0&&y<0)
             {

                 y1=-(x3+y3);x2=x3+y3;
             }
             else if(x<0&&y>0)
             {

                 x1=-(x3+y3);y2=x3+y3;
             }
             else if(x<0&&y<0)
             {

                x1=-(x3+y3);y2=-(x3+y3);
             }


          cout<<x1<<" "<<y1<<" "<<x2<<" "<<y2;


    return 0;

}


