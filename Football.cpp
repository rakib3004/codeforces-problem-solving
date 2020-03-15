
#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<vector>
#include<stdlib.h>
#include<cmath>
#include<cstdio>
#include<map>
#include<string>
#include<string.h>
#define   o   long long int
#define x  int i,n,k;cin >>n>>k;  int a[n];for(i=0;i<n;i++){cin>>a[i];}


using namespace std;

int main()

{


            int n;


            cin>>n;

            int i;


            string a[n];


            cin>>a[0];


            string b,c;

            int b1=0,c1=0;


            b=a[0];

            for(i=1;i<n;i++)
            {


            cin>>a[i];

            }





            for(i=1;i<n;i++)
            {

                if(a[i]!=b)
                {

                    c=a[i];
                    break;
                }
            }



            for(i=0;i<n;i++)
            {

                if(a[i]==b)
                {

                    b1++;
                }

                else if(a[i]==c)
                {

                    c1++;
                }
            }


            if(b1>c1)
            {

                cout<<b;
            }

            else if(c1>b1)
            {

                cout<<c;
            }

              return 0;

}
