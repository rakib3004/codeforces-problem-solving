
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



int n;

cin  >>n;

int d=sqrt(n);

int i;


for(i=d;i>=1;--i)
{


    if(n%i==0)
    {

        cout  <<i<<" "<<n/i;
        return 0;
    }
}

           return 0;
}

