
#include<iostream>
#include<string>
#include<string.h>
#include<algorithm>
#include<stdio.h>
#include<cmath>

#include<stdlib.h>
#include<math.h>
#define  o  long long int
using namespace std;

int main()

{



    int n,u=0,a=0,c=0,t=0,g=0;

    cin>>n;

    string s;

    cin>>s;
    if(n%4!=0)
    {

        cout<<"===";
        return 0;
    }

    int i;

    for(i=0;i<n;i++)
    {

        if(s[i]=='?')
        {

          u++;

        }

        else if(s[i]=='A')
        {

            a++;
        }
else if(s[i]=='C')
        {

            c++;
        }
else if(s[i]=='T')
        {

            t++;
        }
else if(s[i]=='G')
        {

            g++;
        }


    }


    int y=n/4;

    if(a>y||c>y||t>y||g>y)
    {

        cout <<"===";
        return 0;
    }

    g=y-g;
    a=y-a;
    t=y-t;
    c=y-c;
         int k[4]={a,c,g,t};
              std::string z;
              z="ACGT";

              int j=0;

    for(i=0;i<n;i++)
    {
        if(k[j]==0)
        {

            j++;
            i--;
        }

          else
          {


              if(s[i]=='?')
        {

           s[i]=z[j];

             k[j]--;
        }

              }



    }

    cout  <<s;

    return 0;
}


