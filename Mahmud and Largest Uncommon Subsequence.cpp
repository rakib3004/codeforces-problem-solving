
#include<iostream>
#include<string.h>

using namespace std;



int main()

         {
string a,b;


cin >>a>>b;

if(a==b)
{

    cout <<"-1";
    return 0;
}

int f=a.size();
int g=b.size();


if(g>f)

{

    f=g;
}

cout<< f<<endl;




               return 0;
         }
