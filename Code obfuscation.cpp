
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


            int n=s.size();

                  int i;
                  if(s[0]!='a')
                  {

                  cout<<"NO";return 0;

                  }
                  char h='a';

            for(i=1;i<n;i++)
            {
               if(s[i]<=h)
                     {

                         continue;
                     }
                     else if(s[i]==h+1)
                     {

                         h=s[i];
                     }
                     else{cout<<"NO";return 0;}


            }


            cout<<"YES";

    return 0;

}


