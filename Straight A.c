
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<cmath>
#include<string>
#define   o  unsigned long long int
using namespace std;

int main()

{
      int n,k;

      cin  >>n>>k;

    int a[n];

    int i;
       float  sum=0,avg;

    for(i=0;i<n;i++)
    {


        cin  >>a[i];
        sum +=a[i];
    }



    for(i=n; ;i++)
    {
     avg=sum/i;

            if(avg+.5>=k)
            {

                cout  <<i-n;
                return 0;
            }

            else

            {
                sum+=k;
            }


    }





           return 0;
}

