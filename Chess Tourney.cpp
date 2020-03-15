
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


int n;


cin>>n;


int a[2*n];

  int i,j;
for(i=0;i<2*n;i++)
{

    cin>>a[i];
}


     sort(a,a+(2*n));



    for(i=0,j=(2*n)-1;i<j;i++,j--)
    {


        if(a[j]>a[i])
        {

            continue;
        }
        else{cout<<"NO";return 0;}

    }

       cout<<"YES";


    return 0;

}


