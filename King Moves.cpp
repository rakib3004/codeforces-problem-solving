#include<iostream>
#include<algorithm>
#include<stdio.h>
#include<math.h>
#include<string>

using namespace std;

int main()

{


      string  a;

      cin >>a;

      int p=8;


      if(a[0]=='a'||a[0]=='h')
      {

          p=5;

      }

      if(a[1]=='1'||a[1]=='8')
      {

          if(p==5)
          {

              p=3;
          }

          else
          {

              p=5;
          }

      }



      cout << p;

           return 0;
}

