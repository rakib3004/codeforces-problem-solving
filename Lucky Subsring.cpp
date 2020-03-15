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




            string s;


            cin>>s;


            int a=0,b=0;

            int n=s.size();

            int i;

            for(i=0;i<n;i++)
            {


                if(s[i]=='4')a++;
                else if(s[i]=='7')b++;
            }

            if(a==0&&b==0)
            {

                cout<<-1;
            }
            else{

             if(b>a)
             {

                 cout<<7;
             }
             else
             {

                 cout<<4;
             }


            }




    return 0;

}


