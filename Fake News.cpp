
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


          string a;
 cin>>a;
             string b="heidi";

                 int n=a.size();
              int i=0,j=0;




          for(i=0;i<n;i++)
          {


          if(a[i]==b[j])
          {

            j++;

          }

          if(j==5)
          {

              cout<<"YES";
              return 0;
          }



          }


cout<<"NO";


              return 0;

}
