
#include<stdio.h>

 #include<iostream>
#include<stdlib.h>
#include<cmath>
#include<algorithm>
#define o long long int

using namespace std;




int main()
{



	          int n,m;

	          cin>>n>>m;


	          int k=(n*(n+1))/2;

	          m=m%k;

	              int i,g;

	          for(i=1;i<=n;i++)
              {

                 g=(i*(i+1))/2;


                  if(g>m)

                  {
                      i--;
                      g=(i*(i+1))/2;

                      int p=m-g;
                      cout<<p;

                      return 0;

                  }

              }



        return 0;



}
