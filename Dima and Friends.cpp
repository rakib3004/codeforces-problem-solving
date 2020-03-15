
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


    int n,sum=0;
    cin  >>n;
    int a[n];

    int i;

    for(i=0; i<n; i++)
    {

        cin  >>a[i];
        sum+=a[i];
    }

    n=n+1;
    int  x=0;


    for(i=1; i<=5; i++)
    {
        if((sum+i)%(n)!=1)
        {
            x++;
        }
    }

    cout<<x;
    return 0;

}

