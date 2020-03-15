
#include<stdio.h>
#include<string>
#include<cstdio>
#include<iostream>
#include<stdlib.h>
#include<cmath>
#include<vector>
#include<map>
#include<algorithm>


using namespace std;

int main()
{

  int a;

  string b,c;


  cin>>a>>b>>c;

  if(c=="month")
  {
    if(a<=29)
    {

        cout<<12;

    }
    else if(a==30)
    {

        cout<<11;
    }

    else
    {

        cout<<7;
    }

  }
  else
  {



      if(a==6||a==5)
      {

          cout<<53;
      }

      else
      {

          cout<<52;
      }
  }


     return 0;

}
