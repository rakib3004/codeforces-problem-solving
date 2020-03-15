
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{



int n,m;

cin >>n>>m;

string a;

cin  >>a;

int i,j;

   int l,r;
   char c1,c2;
for(i=0;i<m;i++)
{

    cin >>l>>r>>c1>>c2;



      for(j=l-1;j<r;j++)
      {


          if(a[j]==c1)
          {

              a[j]=c2;
          }
      }

}

cout  <<a;

return 0;

}
