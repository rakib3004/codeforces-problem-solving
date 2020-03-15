
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#define o long long int

using namespace std;

int main()
{




       int n;
       cin>>n;

          int l;

            string s;
            int j,i;
          for(i=0;i<n;i++)
          {
              cin>>s;


              l=s.size();

              sort(s.begin(),s.end());

            for(j=0;j<l-1;j++)
            {

            if(s[j]+1!=s[j+1])

            {
              l=0;
            }
            }

              if(l==0)
              {
                 cout<<"No\n";

              }

              else

              {
      cout<<"Yes\n";

              }




          }


}
