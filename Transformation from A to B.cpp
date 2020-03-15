
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


        int a,b;


        cin>>a>>b;


        int x[33]={0};

        int k=0;


        int i;


         x[0]=b;
        for(i=0;i<=33;i++)
        {

            if(b==a)
            {
                   k++;
                break;
            }
            else if(b<a)
            {

              cout<<"NO";
              return 0;

            }

            else if(b%2==1&&b%10==1)
            {

                b--;
                b/=10;
                k++;
                x[k]=b;
            }

            else  if(b%2==0)
                {



                b/=2;
                k++;
                x[k]=b;
            }
            else
            {

             cout<<"NO";
              return 0;

            }


        }

       cout<<"YES"<<endl;
       cout<<k<<endl;
       for(i=k-1;i>=0;i--)
       {


           cout<<x[i]<<" ";
       }



    return 0;

}


