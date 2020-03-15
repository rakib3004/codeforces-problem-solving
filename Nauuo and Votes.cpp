
#include<iostream>
#include<string>
#include<algorithm>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()

{




int x,y,z;
char a,b,c,d;
a='+' ;
b='-';
c='0';
d='?';



cin >>x>>y>>z;

if(x>y&&(x-z)>0&&(y+z)<x)
{

    cout  <<a;

}
else if(y>x&&(y-z)>0&&(x+z)<y)
{

    cout  <<b;
}

else if(x==y&&z==0)
{

    cout  <<c;
}

else{cout  <<d;}

return 0;

}
