
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


            int m,n;


            cin>>m>>n;


            int a[n];


            int  i;


            for(i=0;i<n;i++)
            {

             cin>>a[i];



            }


            int y=3004;

            sort(a,a+n);

                int p;
            for(i=0;i<=n-m;i++)
            {
                p=a[i+m-1]-a[i];

                if(p<y)
                {

                    y=p;

                }

            }


        cout<<y;

    return 0;

}
