#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>
#include<stdlib.h>
#include<math.h>
#define  o  long long int
using namespace std;

int main()

{

    int i,j,n;

    cin>>n;


    string a[n];

    for(i=0;i<n;i++)

    {


        cin>>a[i];

    }
      int d[7]={0};

      int max=0;

    for(i=0;i<7;i++)
    {

      for(j=0;j<n;j++)
      {
        if(a[j][i]=='1')

        {
            d[i]++;
        }

      }



      if(d[i]>max)
      {

          max=d[i];
      }
    }


   cout  <<max;


    return 0;
}


