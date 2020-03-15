
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>


using namespace std;

int main()
{

      int a[3];


      int d;

      cin>>a[0]>>a[1]>>a[2]>>d;


      sort(a,a+3);

      int m=0;
       if((a[1]-a[0])>d)
       {

        m+=0;
       }

       else


       {
         m+=(d-(a[1]-a[0]));
       }

      if((a[2]-a[1])>d)
       {

        m+=0;
       }

        else
        {

        m+=(d-(a[2]-a[1]));
        }
     cout<<m;


     return 0;

}
