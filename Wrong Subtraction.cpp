

#include<stdio.h>
#include<string>
#include<string.h>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>
#define   o long long int

using namespace std;


int  main()
{



    int p;

    cin>>p;


      string s;


      cin>>s;


      int i;


      int n =s.size();

            int a[n]={0};

            for(i=0;i<n;i++)
      {

          if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
          {

            a[i]=1;

          }

      }
      for(i=0;i<n-1;i++)
      {

       if(a[i]==a[i+1]&&a[i]==1)
       {

           s[i+1]='$';

       }


      }

      for(i=0;i<n;i++)
      {
            if(s[i]!='$')
          cout<<s[i];
      }

   return 0;

}





