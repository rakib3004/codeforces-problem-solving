
#include<stdio.h>
#include<string>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int
using namespace std;

int main()
{


      int n;


      int k ;

      int h[256]={0};


      cin>>n>>k;

           k--;

      string s;

           char p='A';

      cin>>s;


      int i;

      for(i=0;i<n;i++)
      {

          if(s[i]>=p&&s[i]<=p+k)
          {
            h[s[i]]++;

          }


      }

        int minimum=h[p];

        for(i=p+1;i<=p+k;i++)
        {

            if(h[i]<minimum)
            {

                minimum=h[i];
            }
        }


             k++;
      cout<<minimum*k;



    return 0;
    }


