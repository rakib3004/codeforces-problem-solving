
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



           string  a,b;


           cin  >>a>>b;



           int s=a.size(),m;

              m=b.size();

           int i,j=0;

           for(i=0;i<m;i++)
           {

              if(b[i]==a[j])
              {

                  j++;
              }

           }


           cout  << j+1;

           return 0;
}

