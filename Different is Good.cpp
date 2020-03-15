
#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<string>
#include <numeric>

using namespace std;

int main()

{


      int n;

      cin  >>n;
       int i,count=0;

      string a;

      cin  >>a;
         if(n>26)
       {

           cout  <<-1;
           return 0;
       }


         int  y[256]={0};


          for(i=0;i<n;i++)
          {

           y[a[i]]++;

          }

          for(i=97;i<=122;i++)
          {
            if(y[i]>1)
            {

                count+=y[i]-1;
            }

          }




       cout  << count;

           return 0;
}

